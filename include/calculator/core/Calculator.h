#pragma once
#include "Lexer.h"
#include "Parser.h"

class Calculator
{
private:
	Lexer lexer;
	Parser parser;

public:
	Calculator() = default;
	~Calculator() = default;

public:
	double Calculate(const std::string& _expression);
};