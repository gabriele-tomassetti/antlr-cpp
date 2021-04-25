#include <iostream>

#include "antlr4-runtime.h"
#include "libs/SceneLexer.h"
#include "libs/SceneParser.h"
#include "ImageVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("input.scene");
    
    ANTLRInputStream input(stream);
    SceneLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SceneParser parser(&tokens);    
    
    SceneParser::FileContext* tree = parser.file();

    ImageVisitor visitor;
    Scene scene = visitor.visitFile(tree).as<Scene>();
    scene.draw();	

    return 0;
}