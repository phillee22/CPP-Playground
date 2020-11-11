#include <iostream>
#include "TreeWalker.h"

void TreeWalker::Walk(TreeNode* root)
{
	//

}


void TreeWalker::PostOrder(TreeNode* root)
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


void TreeWalker::PreOrder(TreeNode* root)
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


void TreeWalker::ReverseOrder(TreeNode* root)
{
	if (root->_rightchild) 
	{
		ReverseOrder(root->_rightchild);
	}

	std::cout << root->value << "\n";

	if (root->_leftchild)
	{
		ReverseOrder(root->_leftchild);
	}
}

void TreeWalker::SortedOrder(TreeNode* root)
{
	if (root->_leftchild)
	{
		SortedOrder(root->_leftchild);
	}

	std::cout << root->value << "\n";

	if (root->_rightchild)
	{
		SortedOrder(root->_rightchild);
	}
}