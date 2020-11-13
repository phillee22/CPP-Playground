#pragma once
#include "IShape.h"
class Triangle : public IShape
{

public:
	Triangle();
	Triangle(int height, int width);
	float GetArea();
	void setHeight(int height);
	void setWidth(int width);
};

