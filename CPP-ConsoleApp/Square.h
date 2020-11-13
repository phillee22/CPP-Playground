#pragma once
#include "IShape.h"

class Square : public IShape
{

public:
	Square();
	Square(int height, int width);
	float GetArea();
	void setHeight(int height);
	void setWidth(int width);
};
