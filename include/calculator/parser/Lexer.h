#pragma once
#include "Token.h"
#include <vector>

class Lexer
{
public:
	Lexer() = default;
	~Lexer() = default;

public:
	std::vector<Token> Tokenize(const std::string& _expression) const;
};