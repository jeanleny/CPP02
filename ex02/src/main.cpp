#include <Fixed.hpp>

int	main(void)
{
	Fixed a1(1);
	Fixed a2(2);
	std::cout << "------- < : > --------" << std::endl;
	
	std::cout << "a1 = " << a1.getRawBits() << std::endl;
	std::cout << "a2 = " << a2.getRawBits() << std::endl;
	if (a1 > a2)
		std::cout << "a1 is > a2" << std::endl;
	if (a1 < a2)
		std::cout << "a1 is < a2" << std::endl;
	a1.setRawBits(2);
	std::cout << "a1 = " << a1.getRawBits() << std::endl;
	std::cout << "a2 = " << a2.getRawBits() << std::endl;
	if (a1 > a2)
		std::cout << "a1 is > a2" << std::endl;
	if (a1 < a2)
		std::cout << "a1 is < a2" << std::endl;
	a1.setRawBits(3);
	std::cout << "a1 = " << a1.getRawBits() << std::endl;
	std::cout << "a2 = " << a2.getRawBits() << std::endl;
	if (a1 > a2)
		std::cout << "a1 is > a2" << std::endl;
	if (a1 < a2)
		std::cout << "a1 is < a2" << std::endl;
	
	std::cout << "------- <= : >= --------" << std::endl;
	Fixed b1(1);
	Fixed b2(2);
	std::cout << "b1 = " << b1.getRawBits() << std::endl;
	std::cout << "b2 = " << b2.getRawBits() << std::endl;
	if (b1 >= b2)
		std::cout << "b1 is >= b2" << std::endl;
	if (b1 <= b2)
		std::cout << "b1 is <= b2" << std::endl;
	b1.setRawBits(2);
	std::cout << "b1 = " << b1.getRawBits() << std::endl;
	std::cout << "b2 = " << b2.getRawBits() << std::endl;
	if (b1 >= b2)
		std::cout << "b1 is >= b2" << std::endl;
	if (b1 <= b2)
		std::cout << "b1 is <= b2" << std::endl;
	b2.setRawBits(1);
	std::cout << "b1 = " << b1.getRawBits() << std::endl;
	std::cout << "b2 = " << b2.getRawBits() << std::endl;
	if (b1 >= b2)
		std::cout << "b1 is >= b2" << std::endl;
	if (b1 <= b2)
		std::cout << "b1 is <= b2" << std::endl;

	std::cout << "------- == : !=--------" << std::endl;
	std::cout << "b1 = " << b1.getRawBits() << std::endl;
	std::cout << "b2 = " << b2.getRawBits() << std::endl;
	if (b1 != b2)
		std::cout << "b1 is != b2" << std::endl;
	if (b1 == b2)
		std::cout << "b1 is == b2" << std::endl;
	b2.setRawBits(2);
	std::cout << "b1 = " << b1.getRawBits() << std::endl;
	std::cout << "b2 = " << b2.getRawBits() << std::endl;
	if (b1 != b2)
		std::cout << "b1 is != b2" << std::endl;
	if (b1 == b2)
		std::cout << "b1 is == b2" << std::endl;

	std::cout << "------- + --------" << std::endl;
	Fixed result;
	std::cout << "b1 = " << b1.toFloat() << std::endl;
	std::cout << "b2 = " << b2.toFloat() << std::endl;

	result = b1 + b2;
	std::cout << "result b1 + b2: " << result << std::endl;

	std::cout << "------- - --------" << std::endl;
	std::cout << "b1 = " << b1.toFloat() << std::endl;
	std::cout << "b2 = " << b2.toFloat() << std::endl;
	result = b1 - b2;
	std::cout << "result b1 - b2: " << result << std::endl;
}
