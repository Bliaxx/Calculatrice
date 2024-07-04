#pragma once
#include <memory>
#include "ASTNode.h"
#include "IOperation.h"

class OperatorNode : public ASTNode
{
private:
	std::unique_ptr<ASTNode> left;
	std::unique_ptr<ASTNode> right;
	std::shared_ptr<IOperation> operation;

public:
	OperatorNode(std::shared_ptr<IOperation> _operation, std::unique_ptr<ASTNode> _left, std::unique_ptr<ASTNode> _right);
	~OperatorNode() = default;

public:
	double Evaluate() const override;
};