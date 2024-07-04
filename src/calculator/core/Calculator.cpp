#include "Calculator.h"

double Calculator::Calculate(const std::string& _expression)
{
	std::vector<Token> _tokens = lexer.Tokenize(_expression);
	std::unique_ptr<ASTNode> _ast = parser.Parse(_tokens);
	return _ast->Evaluate();
}
