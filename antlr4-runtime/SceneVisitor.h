
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SceneParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SceneParser.
 */
class  SceneVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SceneParser.
   */
    virtual antlrcpp::Any visitFile(SceneParser::FileContext *context) = 0;

    virtual antlrcpp::Any visitName(SceneParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitAction(SceneParser::ActionContext *context) = 0;

    virtual antlrcpp::Any visitSize(SceneParser::SizeContext *context) = 0;

    virtual antlrcpp::Any visitShape(SceneParser::ShapeContext *context) = 0;

    virtual antlrcpp::Any visitColor(SceneParser::ColorContext *context) = 0;

    virtual antlrcpp::Any visitPosition(SceneParser::PositionContext *context) = 0;


};

