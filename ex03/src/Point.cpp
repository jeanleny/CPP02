#include <Point.hpp>

Point::~Point()
{
}

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float nb1, const float nb2) : _x(nb1), _y(nb2)
{
	std::cout << "Point constructor argument called" << std::endl;
}

Point::Point(Point const& obj) : _x(obj._x), _y(obj._y)
{
	std::cout << "Point copy constructor called" << std::endl;
}

Point &Point::operator=(Point const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

float Point::getX()
{
	return (_x.toFloat());
}

float Point::getY()
{
	return (_y.toFloat());
}
