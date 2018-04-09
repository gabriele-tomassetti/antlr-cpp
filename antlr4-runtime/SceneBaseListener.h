
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SceneListener.h"


/**
 * This class provides an empty implementation of SceneListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SceneBaseListener : public SceneListener {
public:

  virtual void enterFile(SceneParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(SceneParser::FileContext * /*ctx*/) override { }

  virtual void enterName(SceneParser::NameContext * /*ctx*/) override { }
  virtual void exitName(SceneParser::NameContext * /*ctx*/) override { }

  virtual void enterAction(SceneParser::ActionContext * /*ctx*/) override { }
  virtual void exitAction(SceneParser::ActionContext * /*ctx*/) override { }

  virtual void enterSize(SceneParser::SizeContext * /*ctx*/) override { }
  virtual void exitSize(SceneParser::SizeContext * /*ctx*/) override { }

  virtual void enterShape(SceneParser::ShapeContext * /*ctx*/) override { }
  virtual void exitShape(SceneParser::ShapeContext * /*ctx*/) override { }

  virtual void enterColor(SceneParser::ColorContext * /*ctx*/) override { }
  virtual void exitColor(SceneParser::ColorContext * /*ctx*/) override { }

  virtual void enterPosition(SceneParser::PositionContext * /*ctx*/) override { }
  virtual void exitPosition(SceneParser::PositionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

