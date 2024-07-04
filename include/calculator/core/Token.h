#pragma once
#include <string>

struct Token
{
public:
	enum class Type {Number, Operator, Parenthesis};
private:
	Type type;
	std::string value;

public:
	Token(const Type _type, const std::string& _value);
	~Token() = default;

public:
	inline Type GetType() const { return type; }
	inline std::string GetValue() const { return value; }
};