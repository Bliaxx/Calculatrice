#pragma once
#include "ASTNode.h"

class NumberNode : public ASTNode
{
private:
	double value = 0.0;

public:
	explicit NumberNode(const double _value);
	~NumberNode() = default;

public:
	double Evaluate() const override;
};