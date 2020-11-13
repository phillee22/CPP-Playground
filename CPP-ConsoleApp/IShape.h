#pragma once

#include <sstream>

class IShape
{
protected:
	int _height = 0;
	int _width = 0;

public:

	virtual float GetArea() = 0;
	virtual void setHeight(int height) = 0;
	virtual void setWidth(int width) = 0;
};