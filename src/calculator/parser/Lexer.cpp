#include "Lexer.h"
#include <regex>

std::vector<Token> Lexer::Tokenize(const std::string& _expression) const
{
	std::vector<Token> _tokens;
	std::regex _tokenPattern(R"(\d+(\.\d+)?|[+*/()-])");
	auto _wordsBegin = std::sregex_iterator(_expression.begin(), _expression.end(), _tokenPattern);
	auto _wordsEnd = std::sregex_iterator();

	for (auto _itToken = _wordsBegin; _itToken != _wordsEnd; ++_itToken)
	{
		const std::string _token = (*_itToken).str();
		if (std::isdigit(_token[0]))
			_tokens.emplace_back(Token::Type::Number, _token);
		else if (_token == "+" || _token == "-" || _token == "*" || _token == "/")
			_tokens.emplace_back(Token::Type::Operator, _token);
		else
			_tokens.emplace_back(Token::Type::Parenthesis, _token);
	}

	return _tokens;
}
