#pragma once

class ASTNode
{
public:
	virtual ~ASTNode() = default;
	virtual double Evaluate() const = 0;
};