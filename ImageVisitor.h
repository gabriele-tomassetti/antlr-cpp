#include <string>
#include "antlr4-runtime/antlr4-runtime.h"
#include "antlr4-runtime/SceneBaseVisitor.h"
#include "Scene.h"

class  ImageVisitor {
public:    
    Scene visitFile(SceneParser::FileContext *ctx);

};

