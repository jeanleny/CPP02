#include <Fixed.hpp>

int	main(void)
{
	Fixed obj1;	
	Fixed obj2( obj1);	
	Fixed obj3;

	obj3 = obj2;
	std::cout << obj1.getRawBits() << std::endl;
	std::cout << obj2.getRawBits() << std::endl;
	std::cout << obj3.getRawBits() << std::endl;
}
