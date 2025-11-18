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
	a1.setRawBits(8);
	a2.setRawBits(4);
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
	b1 = Fixed(7);
	b2 = Fixed(3.5f);

	std::cout << "------- * --------" << std::endl;
	std::cout << "b1 = " << b1 << std::endl;
	std::cout << "b2 = " << b2 << std::endl;
	result = b1 * b2;
	std::cout << "result b1 * b2: " << result << std::endl;

	std::cout << "------- / --------" << std::endl;
	std::cout << "b1 = " << b1 << std::endl;
	std::cout << "b2 = " << b2 << std::endl;
	result = b1 / b2;
	std::cout << "result b1 / b2: " << result<< std::endl;

	Fixed c1(10);
	Fixed c2(10);
	Fixed const const1(5);
	Fixed const const2(5);

	std::cout << "c1 : " << c1 << " c2 : " << c2 << std::endl;
	std::cout << "min : " << Fixed::min(c1, c2) << std::endl;
	std::cout << "max : " << Fixed::max(c1, c2) << std::endl;
	std::cout << "const1 : " << const1 << " const2 : " << const2 << std::endl;
	std::cout << "const min : " << Fixed::min(const1, const2) << std::endl;
	std::cout << "const max : " << Fixed::max(const1, const2) << std::endl;
}
