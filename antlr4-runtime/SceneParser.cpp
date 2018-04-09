
// Generated from c:\Users\Gabriele\Progetti\C++\antlr-cpp\Scene.g4 by ANTLR 4.7.1


#include "SceneListener.h"
#include "SceneVisitor.h"

#include "SceneParser.h"


using namespace antlrcpp;
using namespace antlr4;

SceneParser::SceneParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SceneParser::~SceneParser() {
  delete _interpreter;
}

std::string SceneParser::getGrammarFileName() const {
  return "Scene.g4";
}

const std::vector<std::string>& SceneParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SceneParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

SceneParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::FileContext::EOF() {
  return getToken(SceneParser::EOF, 0);
}

SceneParser::NameContext* SceneParser::FileContext::name() {
  return getRuleContext<SceneParser::NameContext>(0);
}

std::vector<tree::TerminalNode *> SceneParser::FileContext::NEWLINE() {
  return getTokens(SceneParser::NEWLINE);
}

tree::TerminalNode* SceneParser::FileContext::NEWLINE(size_t i) {
  return getToken(SceneParser::NEWLINE, i);
}

std::vector<tree::TerminalNode *> SceneParser::FileContext::TAB() {
  return getTokens(SceneParser::TAB);
}

tree::TerminalNode* SceneParser::FileContext::TAB(size_t i) {
  return getToken(SceneParser::TAB, i);
}

std::vector<SceneParser::ActionContext *> SceneParser::FileContext::action() {
  return getRuleContexts<SceneParser::ActionContext>();
}

SceneParser::ActionContext* SceneParser::FileContext::action(size_t i) {
  return getRuleContext<SceneParser::ActionContext>(i);
}


size_t SceneParser::FileContext::getRuleIndex() const {
  return SceneParser::RuleFile;
}

void SceneParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void SceneParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


antlrcpp::Any SceneParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::FileContext* SceneParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, SceneParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    name();
    setState(15);
    match(SceneParser::NEWLINE);
    setState(23);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SceneParser::TAB) {
      setState(16);
      match(SceneParser::TAB);
      setState(17);
      dynamic_cast<FileContext *>(_localctx)->actionContext = action();
      dynamic_cast<FileContext *>(_localctx)->elements.push_back(dynamic_cast<FileContext *>(_localctx)->actionContext);
      setState(19);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SceneParser::NEWLINE) {
        setState(18);
        match(SceneParser::NEWLINE);
      }
      setState(25);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(26);
    match(SceneParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

SceneParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::NameContext::NAME() {
  return getToken(SceneParser::NAME, 0);
}


size_t SceneParser::NameContext::getRuleIndex() const {
  return SceneParser::RuleName;
}

void SceneParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void SceneParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any SceneParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::NameContext* SceneParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 2, SceneParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(SceneParser::NAME);
    setState(29);
    match(SceneParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionContext ------------------------------------------------------------------

SceneParser::ActionContext::ActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::ActionContext::DRAW() {
  return getToken(SceneParser::DRAW, 0);
}

SceneParser::SizeContext* SceneParser::ActionContext::size() {
  return getRuleContext<SceneParser::SizeContext>(0);
}

SceneParser::ShapeContext* SceneParser::ActionContext::shape() {
  return getRuleContext<SceneParser::ShapeContext>(0);
}

tree::TerminalNode* SceneParser::ActionContext::IN() {
  return getToken(SceneParser::IN, 0);
}

SceneParser::ColorContext* SceneParser::ActionContext::color() {
  return getRuleContext<SceneParser::ColorContext>(0);
}

tree::TerminalNode* SceneParser::ActionContext::AT() {
  return getToken(SceneParser::AT, 0);
}

SceneParser::PositionContext* SceneParser::ActionContext::position() {
  return getRuleContext<SceneParser::PositionContext>(0);
}

tree::TerminalNode* SceneParser::ActionContext::WRITE() {
  return getToken(SceneParser::WRITE, 0);
}

tree::TerminalNode* SceneParser::ActionContext::STRING() {
  return getToken(SceneParser::STRING, 0);
}


size_t SceneParser::ActionContext::getRuleIndex() const {
  return SceneParser::RuleAction;
}

void SceneParser::ActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAction(this);
}

void SceneParser::ActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAction(this);
}


antlrcpp::Any SceneParser::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::ActionContext* SceneParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 4, SceneParser::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SceneParser::DRAW: {
        enterOuterAlt(_localctx, 1);
        setState(31);
        match(SceneParser::DRAW);
        setState(32);
        size();
        setState(33);
        shape();
        setState(34);
        match(SceneParser::IN);
        setState(35);
        color();
        setState(36);
        match(SceneParser::AT);
        setState(37);
        position();
        break;
      }

      case SceneParser::WRITE: {
        enterOuterAlt(_localctx, 2);
        setState(39);
        match(SceneParser::WRITE);
        setState(40);
        size();
        setState(41);
        match(SceneParser::STRING);
        setState(42);
        match(SceneParser::IN);
        setState(43);
        color();
        setState(44);
        match(SceneParser::AT);
        setState(45);
        position();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SizeContext ------------------------------------------------------------------

SceneParser::SizeContext::SizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::SizeContext::SMALL() {
  return getToken(SceneParser::SMALL, 0);
}

tree::TerminalNode* SceneParser::SizeContext::MEDIUM() {
  return getToken(SceneParser::MEDIUM, 0);
}

tree::TerminalNode* SceneParser::SizeContext::BIG() {
  return getToken(SceneParser::BIG, 0);
}


size_t SceneParser::SizeContext::getRuleIndex() const {
  return SceneParser::RuleSize;
}

void SceneParser::SizeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSize(this);
}

void SceneParser::SizeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSize(this);
}


antlrcpp::Any SceneParser::SizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitSize(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::SizeContext* SceneParser::size() {
  SizeContext *_localctx = _tracker.createInstance<SizeContext>(_ctx, getState());
  enterRule(_localctx, 6, SceneParser::RuleSize);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SceneParser::SMALL)
      | (1ULL << SceneParser::MEDIUM)
      | (1ULL << SceneParser::BIG))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShapeContext ------------------------------------------------------------------

SceneParser::ShapeContext::ShapeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::ShapeContext::CIRCLE() {
  return getToken(SceneParser::CIRCLE, 0);
}

tree::TerminalNode* SceneParser::ShapeContext::SQUARE() {
  return getToken(SceneParser::SQUARE, 0);
}


size_t SceneParser::ShapeContext::getRuleIndex() const {
  return SceneParser::RuleShape;
}

void SceneParser::ShapeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShape(this);
}

void SceneParser::ShapeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShape(this);
}


antlrcpp::Any SceneParser::ShapeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitShape(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::ShapeContext* SceneParser::shape() {
  ShapeContext *_localctx = _tracker.createInstance<ShapeContext>(_ctx, getState());
  enterRule(_localctx, 8, SceneParser::RuleShape);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    _la = _input->LA(1);
    if (!(_la == SceneParser::CIRCLE

    || _la == SceneParser::SQUARE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColorContext ------------------------------------------------------------------

SceneParser::ColorContext::ColorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::ColorContext::BLACK() {
  return getToken(SceneParser::BLACK, 0);
}

tree::TerminalNode* SceneParser::ColorContext::BLUE() {
  return getToken(SceneParser::BLUE, 0);
}

tree::TerminalNode* SceneParser::ColorContext::BROWN() {
  return getToken(SceneParser::BROWN, 0);
}

tree::TerminalNode* SceneParser::ColorContext::GREEN() {
  return getToken(SceneParser::GREEN, 0);
}

tree::TerminalNode* SceneParser::ColorContext::RED() {
  return getToken(SceneParser::RED, 0);
}

tree::TerminalNode* SceneParser::ColorContext::ORANGE() {
  return getToken(SceneParser::ORANGE, 0);
}

tree::TerminalNode* SceneParser::ColorContext::PURPLE() {
  return getToken(SceneParser::PURPLE, 0);
}

tree::TerminalNode* SceneParser::ColorContext::YELLOW() {
  return getToken(SceneParser::YELLOW, 0);
}

tree::TerminalNode* SceneParser::ColorContext::WHITE() {
  return getToken(SceneParser::WHITE, 0);
}


size_t SceneParser::ColorContext::getRuleIndex() const {
  return SceneParser::RuleColor;
}

void SceneParser::ColorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColor(this);
}

void SceneParser::ColorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColor(this);
}


antlrcpp::Any SceneParser::ColorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitColor(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::ColorContext* SceneParser::color() {
  ColorContext *_localctx = _tracker.createInstance<ColorContext>(_ctx, getState());
  enterRule(_localctx, 10, SceneParser::RuleColor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SceneParser::BLACK)
      | (1ULL << SceneParser::BLUE)
      | (1ULL << SceneParser::BROWN)
      | (1ULL << SceneParser::GREEN)
      | (1ULL << SceneParser::RED)
      | (1ULL << SceneParser::ORANGE)
      | (1ULL << SceneParser::PURPLE)
      | (1ULL << SceneParser::YELLOW)
      | (1ULL << SceneParser::WHITE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionContext ------------------------------------------------------------------

SceneParser::PositionContext::PositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SceneParser::PositionContext::LEFT() {
  return getToken(SceneParser::LEFT, 0);
}

std::vector<tree::TerminalNode *> SceneParser::PositionContext::CENTER() {
  return getTokens(SceneParser::CENTER);
}

tree::TerminalNode* SceneParser::PositionContext::CENTER(size_t i) {
  return getToken(SceneParser::CENTER, i);
}

tree::TerminalNode* SceneParser::PositionContext::RIGHT() {
  return getToken(SceneParser::RIGHT, 0);
}

tree::TerminalNode* SceneParser::PositionContext::TOP() {
  return getToken(SceneParser::TOP, 0);
}

tree::TerminalNode* SceneParser::PositionContext::BOTTOM() {
  return getToken(SceneParser::BOTTOM, 0);
}


size_t SceneParser::PositionContext::getRuleIndex() const {
  return SceneParser::RulePosition;
}

void SceneParser::PositionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosition(this);
}

void SceneParser::PositionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SceneListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosition(this);
}


antlrcpp::Any SceneParser::PositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SceneVisitor*>(visitor))
    return parserVisitor->visitPosition(this);
  else
    return visitor->visitChildren(this);
}

SceneParser::PositionContext* SceneParser::position() {
  PositionContext *_localctx = _tracker.createInstance<PositionContext>(_ctx, getState());
  enterRule(_localctx, 12, SceneParser::RulePosition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    dynamic_cast<PositionContext *>(_localctx)->x = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SceneParser::LEFT)
      | (1ULL << SceneParser::RIGHT)
      | (1ULL << SceneParser::CENTER))) != 0))) {
      dynamic_cast<PositionContext *>(_localctx)->x = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(56);
    match(SceneParser::T__1);
    setState(57);
    dynamic_cast<PositionContext *>(_localctx)->y = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SceneParser::CENTER)
      | (1ULL << SceneParser::TOP)
      | (1ULL << SceneParser::BOTTOM))) != 0))) {
      dynamic_cast<PositionContext *>(_localctx)->y = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SceneParser::_decisionToDFA;
atn::PredictionContextCache SceneParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SceneParser::_atn;
std::vector<uint16_t> SceneParser::_serializedATN;

std::vector<std::string> SceneParser::_ruleNames = {
  "file", "name", "action", "size", "shape", "color", "position"
};

std::vector<std::string> SceneParser::_literalNames = {
  "", "':'", "','", "'draw'", "'write'", "'in'", "'at'", "'circle'", "'square'", 
  "'small'", "'medium'", "'big'", "'left'", "'right'", "'center'", "'top'", 
  "'bottom'", "", "'black'", "'blue'", "'brown'", "'green'", "'red'", "'orange'", 
  "'purple'", "'yellow'", "'white'", "", "", "", "' '"
};

std::vector<std::string> SceneParser::_symbolicNames = {
  "", "", "", "DRAW", "WRITE", "IN", "AT", "CIRCLE", "SQUARE", "SMALL", 
  "MEDIUM", "BIG", "LEFT", "RIGHT", "CENTER", "TOP", "BOTTOM", "STRING", 
  "BLACK", "BLUE", "BROWN", "GREEN", "RED", "ORANGE", "PURPLE", "YELLOW", 
  "WHITE", "NAME", "NEWLINE", "TAB", "WHITESPACE"
};

dfa::Vocabulary SceneParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SceneParser::_tokenNames;

SceneParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x20, 0x3e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x16, 0xa, 0x2, 0x7, 0x2, 0x18, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1b, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x32, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 0x7, 0x3, 
    0x2, 0xb, 0xd, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0x14, 0x1c, 0x3, 0x2, 0xe, 
    0x10, 0x3, 0x2, 0x10, 0x12, 0x2, 0x39, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x31, 0x3, 0x2, 0x2, 0x2, 0x8, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x39, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 
    0x2, 0x11, 0x19, 0x7, 0x1e, 0x2, 0x2, 0x12, 0x13, 0x7, 0x1f, 0x2, 0x2, 
    0x13, 0x15, 0x5, 0x6, 0x4, 0x2, 0x14, 0x16, 0x7, 0x1e, 0x2, 0x2, 0x15, 
    0x14, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x12, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x1d, 0x7, 0x2, 0x2, 0x3, 0x1d, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x1f, 0x7, 0x1d, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x3, 0x2, 0x2, 0x20, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x5, 0x2, 0x2, 0x22, 0x23, 
    0x5, 0x8, 0x5, 0x2, 0x23, 0x24, 0x5, 0xa, 0x6, 0x2, 0x24, 0x25, 0x7, 
    0x7, 0x2, 0x2, 0x25, 0x26, 0x5, 0xc, 0x7, 0x2, 0x26, 0x27, 0x7, 0x8, 
    0x2, 0x2, 0x27, 0x28, 0x5, 0xe, 0x8, 0x2, 0x28, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x6, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x8, 0x5, 0x2, 
    0x2b, 0x2c, 0x7, 0x13, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x7, 0x2, 0x2, 0x2d, 
    0x2e, 0x5, 0xc, 0x7, 0x2, 0x2e, 0x2f, 0x7, 0x8, 0x2, 0x2, 0x2f, 0x30, 
    0x5, 0xe, 0x8, 0x2, 0x30, 0x32, 0x3, 0x2, 0x2, 0x2, 0x31, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x29, 0x3, 0x2, 0x2, 0x2, 0x32, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x34, 0x9, 0x2, 0x2, 0x2, 0x34, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x9, 0x3, 0x2, 0x2, 0x36, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x38, 0x9, 0x4, 0x2, 0x2, 0x38, 0xd, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3a, 0x9, 0x5, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x4, 0x2, 0x2, 0x3b, 0x3c, 
    0x9, 0x6, 0x2, 0x2, 0x3c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5, 0x15, 0x19, 
    0x31, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SceneParser::Initializer SceneParser::_init;
