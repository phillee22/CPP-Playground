#pragma once
#include <sstream>

class TreeNode
{
private:


protected:



public:
	TreeNode* _leftchild = nullptr;
	TreeNode* _rightchild = nullptr;
	int value = INT_MAX;

	TreeNode* GetLeftChild();
	TreeNode* GetRightChild();
	void Insert(int value);
};

