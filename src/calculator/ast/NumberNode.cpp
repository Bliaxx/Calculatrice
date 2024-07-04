#include "NumberNode.h"

NumberNode::NumberNode(const double _value) : value(_value)
{
}

double NumberNode::Evaluate() const
{
	return value;
}
