#pragma once

#include "TreeNode.h"

class TreeWalker
{
	
public:
	void Walk(TreeNode* root);
	void PostOrder(TreeNode* root);
	void PreOrder(TreeNode* root);
	void ReverseOrder(TreeNode* root);
	void SortedOrder(TreeNode* root);
};

