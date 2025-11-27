#include <Point.hpp>

/*float	sideLength(Point first, Point second)
{
	float distance;
	t_vect2	first_v2;
	t_vect2	second_v2;

	first_v2.x = first.getX();
	first_v2.y = first.getY();
	second_v2.x = second.getX();
	second_v2.y = second.getY();
	std::cout << "first x : " << first_v2.x << std::endl;
	std::cout << "first y : " << first_v2.y << std::endl;
	distance = sqrt(pow((second_v2.x - first_v2.x), 2) + pow((second_v2.y - second_v2.y), 2));
	return (distance);	
}*/

float	scalar_product(Point point, Point p1, Point p2)
{
	return ((point.getX() - p2.getX()) * (p1.getY() - p2.getY()) - (p1.getX() - p2.getX()) * (point.getY() - p2.getY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float sp_1;
	float sp_2;
	float sp_3;

	sp_1 = scalar_product(point, a, b);
	sp_2 = scalar_product(point, b, c);
	sp_3 = scalar_product(point, c, a);
	if (sp_1 > 0 && sp_2 > 0 && sp_3 > 0)
		return (true);
	if (sp_1 < 0 && sp_2 < 0 && sp_3 < 0)
		return (true);
	return (false);
}
