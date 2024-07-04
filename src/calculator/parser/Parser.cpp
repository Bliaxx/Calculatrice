#include "Parser.h"
#include "Addition.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "NumberNode.h"
#include "OperatorNode.h"

Parser::Parser()
{
	operations["+"] = std::make_shared<Addition>();
	operations["-"] = std::make_shared<Soustraction>();
	operations["*"] = std::make_shared<Multiplication>();
	operations["/"] = std::make_shared<Division>();
}

std::unique_ptr<ASTNode> Parser::ParseExpression()
{
	auto _node = ParseTerm();
	while (index < tokens.size() && (tokens[index].GetValue() == "+" || tokens[index].GetValue() == "-"))
	{
		std::string _operation = tokens[index++].GetValue();
		_node = std::make_unique<OperatorNode>(operations[_operation], std::move(_node), ParseTerm());
	}
	return _node;
}

std::unique_ptr<ASTNode> Parser::ParseTerm()
{
	auto _node = ParseFactor();
	while (index < tokens.size() && (tokens[index].GetValue() == "*" || tokens[index].GetValue() == "/"))
	{
		std::string _operation = tokens[index++].GetValue();
		_node = std::make_unique<OperatorNode>(operations[_operation], std::move(_node), ParseFactor());
	}
	return _node;
}

std::unique_ptr<ASTNode> Parser::ParseFactor()
{
	if (tokens[index].GetType() == Token::Type::Parenthesis && tokens[index].GetValue() == "(")
	{
		++index;
		auto _node = ParseExpression();
		++index;
		return _node;
	}
	else
	{
		return std::make_unique<NumberNode>(std::stod(tokens[index++].GetValue()));
	}
}

std::unique_ptr<ASTNode> Parser::Parse(const std::vector<Token>& _tokens)
{
	tokens = _tokens;
	index = 0;
	return ParseExpression();
}
