
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SceneParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SceneParser.
 */
class  SceneListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(SceneParser::FileContext *ctx) = 0;
  virtual void exitFile(SceneParser::FileContext *ctx) = 0;

  virtual void enterName(SceneParser::NameContext *ctx) = 0;
  virtual void exitName(SceneParser::NameContext *ctx) = 0;

  virtual void enterAction(SceneParser::ActionContext *ctx) = 0;
  virtual void exitAction(SceneParser::ActionContext *ctx) = 0;

  virtual void enterSize(SceneParser::SizeContext *ctx) = 0;
  virtual void exitSize(SceneParser::SizeContext *ctx) = 0;

  virtual void enterShape(SceneParser::ShapeContext *ctx) = 0;
  virtual void exitShape(SceneParser::ShapeContext *ctx) = 0;

  virtual void enterColor(SceneParser::ColorContext *ctx) = 0;
  virtual void exitColor(SceneParser::ColorContext *ctx) = 0;

  virtual void enterPosition(SceneParser::PositionContext *ctx) = 0;
  virtual void exitPosition(SceneParser::PositionContext *ctx) = 0;


};

