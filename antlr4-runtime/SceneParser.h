
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SceneParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, DRAW = 3, WRITE = 4, IN = 5, AT = 6, CIRCLE = 7, 
    SQUARE = 8, SMALL = 9, MEDIUM = 10, BIG = 11, LEFT = 12, RIGHT = 13, 
    CENTER = 14, TOP = 15, BOTTOM = 16, STRING = 17, BLACK = 18, BLUE = 19, 
    BROWN = 20, GREEN = 21, RED = 22, ORANGE = 23, PURPLE = 24, YELLOW = 25, 
    WHITE = 26, NAME = 27, NEWLINE = 28, TAB = 29, WHITESPACE = 30
  };

  enum {
    RuleFile = 0, RuleName = 1, RuleAction = 2, RuleSize = 3, RuleShape = 4, 
    RuleColor = 5, RulePosition = 6
  };

  SceneParser(antlr4::TokenStream *input);
  ~SceneParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class NameContext;
  class ActionContext;
  class SizeContext;
  class ShapeContext;
  class ColorContext;
  class PositionContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    SceneParser::ActionContext *actionContext = nullptr;;
    std::vector<ActionContext *> elements;;
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    NameContext *name();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TAB();
    antlr4::tree::TerminalNode* TAB(size_t i);
    std::vector<ActionContext *> action();
    ActionContext* action(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  ActionContext : public antlr4::ParserRuleContext {
  public:
    ActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DRAW();
    SizeContext *size();
    ShapeContext *shape();
    antlr4::tree::TerminalNode *IN();
    ColorContext *color();
    antlr4::tree::TerminalNode *AT();
    PositionContext *position();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionContext* action();

  class  SizeContext : public antlr4::ParserRuleContext {
  public:
    SizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMALL();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *BIG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeContext* size();

  class  ShapeContext : public antlr4::ParserRuleContext {
  public:
    ShapeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CIRCLE();
    antlr4::tree::TerminalNode *SQUARE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShapeContext* shape();

  class  ColorContext : public antlr4::ParserRuleContext {
  public:
    ColorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLACK();
    antlr4::tree::TerminalNode *BLUE();
    antlr4::tree::TerminalNode *BROWN();
    antlr4::tree::TerminalNode *GREEN();
    antlr4::tree::TerminalNode *RED();
    antlr4::tree::TerminalNode *ORANGE();
    antlr4::tree::TerminalNode *PURPLE();
    antlr4::tree::TerminalNode *YELLOW();
    antlr4::tree::TerminalNode *WHITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColorContext* color();

  class  PositionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *x = nullptr;;
    antlr4::Token *y = nullptr;;
    PositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT();
    std::vector<antlr4::tree::TerminalNode *> CENTER();
    antlr4::tree::TerminalNode* CENTER(size_t i);
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *TOP();
    antlr4::tree::TerminalNode *BOTTOM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionContext* position();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

