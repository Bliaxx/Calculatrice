#include "OperatorNode.h"

OperatorNode::OperatorNode(std::shared_ptr<IOperation> _operation, std::unique_ptr<ASTNode> _left, std::unique_ptr<ASTNode> _right)
	: operation(std::move(_operation)), left(std::move(_left)), right(std::move(_right))
{
}

double OperatorNode::Evaluate() const
{
	return operation->Apply(left->Evaluate(), right->Evaluate());
}
