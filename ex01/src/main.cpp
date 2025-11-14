#include <Fixed.hpp>

int	main(void)
{
	Fixed			obj1;
	Fixed	const	obj2(10);
	Fixed	const	obj3(42.42f);
	Fixed	const	obj4(obj2);

	obj1 = Fixed(1234.4321f);

	std::cout << "obj1 is " << obj1 << std::endl;
	std::cout << "obj2 is " << obj2 << std::endl;
	std::cout << "obj3 is " << obj3 << std::endl;
	std::cout << "obj4 is " << obj4 << std::endl;
}
