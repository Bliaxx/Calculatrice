#pragma once

class IOperation
{
public:
	virtual ~IOperation() = default;
	virtual double Apply(const double _left, const double _right) const = 0;
};