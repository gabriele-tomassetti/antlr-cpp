#include <string>
#include "antlr4-runtime/antlr4-runtime.h"
#include "antlr4-runtime/SceneBaseVisitor.h"
#include "Scene.h"

class  ImageVisitor : SceneBaseVisitor {
public:    
    antlrcpp::Any visitFile(SceneParser::FileContext *ctx);

	antlrcpp::Any visitAction(SceneParser::ActionContext *ctx);	

	antlrcpp::Any visitShape(SceneParser::ShapeContext *ctx);
};

