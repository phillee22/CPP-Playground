/*
 *
 */

#include "Square.h"

Square::Square()
{
	_height = 0;
	_width = 0;
}

Square::Square(int height, int width)
{
	_height = width;
	_width = height;
}

float Square::GetArea()
{
	return (_height * _width * 1.0f);
}

void Square::setHeight(int height)
{
	this->_height = height;
}

void Square::setWidth(int width)
{
	this->_width = width;
}
