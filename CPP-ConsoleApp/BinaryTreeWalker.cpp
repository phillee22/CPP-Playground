#include <iostream>
#include "BinaryTreeWalker.h"


void BinaryTreeWalker::InOrder(TreeNode* root)
{
	if (root->_leftchild)
	{
		InOrder(root->_leftchild);
	}

	std::cout << root->value << "\n";

	if (root->_rightchild)
	{
		InOrder(root->_rightchild);
	}
}


void BinaryTreeWalker::PostOrder(TreeNode* root)
{
	if (root->_leftchild)
	{
		PostOrder(root->_leftchild);
	}
	if (root->_rightchild)
	{
		PostOrder(root->_rightchild);
	}

	std::cout << root->value << "\n";

}


void BinaryTreeWalker::PreOrder(TreeNode* root)
{
	std::cout << root->value << "\n";

	if (root->_leftchild)
	{
		PreOrder(root->_leftchild);
	}
	if (root->_rightchild)
	{
		PreOrder(root->_rightchild);
	}
}
