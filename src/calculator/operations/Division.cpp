#include "Division.h"
#include <stdexcept>

double Division::Apply(const double _left, const double _right) const
{
	if (_right == 0.0)
	{
		throw std::runtime_error("Division by zero !");
	}
	return _left / _right;
}
