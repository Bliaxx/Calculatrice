#pragma once
#include "IOperation.h"

class Multiplication : public IOperation
{
public:
	double Apply(const double _left, const double _right) const override;
};