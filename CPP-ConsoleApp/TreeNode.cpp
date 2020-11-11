#include "TreeNode.h"

TreeNode* GetLeftChild()
{
	return nullptr;
	//return(this->_leftchild);
}

TreeNode* GetRightChild()
{
	return nullptr;
	//return(this->_rightchild);
}

void TreeNode::Insert(int value)
{
	if (INT_MAX == this->value)
	{
		this->value = value;
	}
	else if (value < this->value)
	{
		// check if left is null
		if (nullptr == this->_leftchild)
		{
			this->_leftchild = new TreeNode();
		}
		this->_leftchild->Insert(value);
	}
	else
	{
		if (nullptr == this->_rightchild)
		{
			this->_rightchild = new TreeNode();
		}
		this->_rightchild->Insert(value);
	}
}