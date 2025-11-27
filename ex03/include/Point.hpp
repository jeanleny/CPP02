#ifndef POINT_HPP
# define POINT_HPP

#include <Fixed.hpp>

typedef struct	s_vect2
{
	float	x;
	float	y;
}	t_vect2;

class	Point
{

	private :
	Fixed const _x;
	Fixed const _y;

	public :
	Point();
	Point(const float nb1, const float nb2);
	Point(Point const& obj);
	Point& operator=(Point const & rhs);
	~Point();

	float getX(void);
	float getY(void);
};
	
bool bsp(Point const a, Point const b, Point const c , Point const point);

#endif
