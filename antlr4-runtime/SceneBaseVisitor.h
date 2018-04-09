
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SceneVisitor.h"


/**
 * This class provides an empty implementation of SceneVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SceneBaseVisitor : public SceneVisitor {
public:

  virtual antlrcpp::Any visitFile(SceneParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(SceneParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAction(SceneParser::ActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSize(SceneParser::SizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShape(SceneParser::ShapeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColor(SceneParser::ColorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPosition(SceneParser::PositionContext *ctx) override {
    return visitChildren(ctx);
  }


};

