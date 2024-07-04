#pragma once
#include <vector>
#include <unordered_map>
#include <memory>
#include "Token.h"
#include "IOperation.h"
#include "ASTNode.h"

class Parser
{
	std::vector<Token> tokens;
	size_t index = 0;
	std::unordered_map < std::string, std::shared_ptr<IOperation>> operations;

public:
	Parser();
	~Parser() = default;

private:
	std::unique_ptr<ASTNode> ParseExpression();
	std::unique_ptr<ASTNode> ParseTerm();
	std::unique_ptr<ASTNode> ParseFactor();

public:
	std::unique_ptr<ASTNode> Parse(const std::vector<Token>& _tokens);
};