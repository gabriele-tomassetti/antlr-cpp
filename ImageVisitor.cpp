#include "ImageVisitor.h"

using namespace std;

std::any ImageVisitor::visitFile(SceneParser::FileContext *ctx) {
    vector<Element> elements;
    
    for (auto element : ctx->elements) {                
		Element el = std::any_cast<Element>(visitAction(element));

        elements.push_back(el);		
    }    
        	
    std::any result = Scene(ctx->name()->NAME()->getText(), elements);
    
	return result;
}

std::any ImageVisitor::visitAction(SceneParser::ActionContext *ctx) {
	Action action;
	
	if (ctx->DRAW()) {
		action = Draw;
		Shape shape = std::any_cast<Shape>(visitShape(ctx->shape()));
		return Element(action, ctx->size()->getText(), ctx->color()->getText(), ctx->position()->x->getText(), ctx->position()->y->getText(), shape);
	}
	else if (ctx->WRITE()) {
		action = Write;
		string text = ctx->STRING()->getText().substr(1, ctx->STRING()->getText().length() - 2);
		return Element(action, ctx->size()->getText(), ctx->color()->getText(), ctx->position()->x->getText(), ctx->position()->y->getText(), text);
	}
	else
		action = NoAction;

	return Element(action);
}

std::any ImageVisitor::visitShape(SceneParser::ShapeContext *ctx) {
	return Element::convertShape(ctx->getText());
}