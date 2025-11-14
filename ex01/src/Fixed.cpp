#include <Fixed.hpp>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
};

Fixed::Fixed(Fixed const& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = obj.getRawBits();
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}
