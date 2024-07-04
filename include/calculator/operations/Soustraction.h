#pragma once
#include "IOperation.h"

class Soustraction : public IOperation
{
public:
	double Apply(const double _left, const double _right) const override;
};