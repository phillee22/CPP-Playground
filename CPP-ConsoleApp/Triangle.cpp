#include "Triangle.h"

Triangle::Triangle()
{
	_height = 0;
	_width = 0;
}

Triangle::Triangle(int height, int width)
{
	_height = height;
	_width = width;
}

float Triangle::GetArea()
{
	return ( _height * _width * .5f);
}

void Triangle::setHeight(int height)
{
	_height = height;
}

void Triangle::setWidth(int width)
{
	_width = width;
}
