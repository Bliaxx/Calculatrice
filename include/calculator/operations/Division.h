#pragma once
#include "IOperation.h"

class Division : public IOperation
{
public:
	double Apply(const double _left, const double _right) const override;
};