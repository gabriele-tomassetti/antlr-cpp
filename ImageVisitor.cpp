#include "ImageVisitor.h"

using namespace std;

Scene ImageVisitor::visitFile(SceneParser::FileContext *ctx) {                
    vector<Element> elements;
    for (auto element : ctx->elements) {
                
        Action action;
        string text = "";
        Shape shape = NoShape;
        if(element->DRAW()) {
            action = Draw;            
            shape = Element::convertShape(element->shape()->getText());
        }
        else if(element->WRITE()) {
            action = Write;
            text = element->STRING()->getText().substr(1, element->STRING()->getText().length()-2);
        }
        else
            action = NoAction;
        
        Element el(action, element->size()->getText(), element->color()->getText(), element->position()->x->getText(), element->position()->y->getText(), text, shape);    
        elements.push_back(el);
    }    
        
    Scene scene(ctx->name()->NAME()->getText(), elements);
    return scene;
}

