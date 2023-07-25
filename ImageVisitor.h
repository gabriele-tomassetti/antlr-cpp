#include <string>
#include "antlr4-runtime.h"
#include "libs/SceneBaseVisitor.h"
#include "Scene.h"

class  ImageVisitor : SceneBaseVisitor {
public:    
    std::any visitFile(SceneParser::FileContext *ctx);

	std::any visitAction(SceneParser::ActionContext *ctx);	

	std::any visitShape(SceneParser::ShapeContext *ctx);
};

