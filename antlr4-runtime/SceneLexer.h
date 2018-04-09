
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SceneLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, DRAW = 3, WRITE = 4, IN = 5, AT = 6, CIRCLE = 7, 
    SQUARE = 8, SMALL = 9, MEDIUM = 10, BIG = 11, LEFT = 12, RIGHT = 13, 
    CENTER = 14, TOP = 15, BOTTOM = 16, STRING = 17, BLACK = 18, BLUE = 19, 
    BROWN = 20, GREEN = 21, RED = 22, ORANGE = 23, PURPLE = 24, YELLOW = 25, 
    WHITE = 26, NAME = 27, NEWLINE = 28, TAB = 29, WHITESPACE = 30
  };

  SceneLexer(antlr4::CharStream *input);
  ~SceneLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

