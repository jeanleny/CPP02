#include <Fixed.hpp>

const int	Fixed::_fBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	_value = nb << _fBits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(nb *(1 << _fBits));
}

Fixed::Fixed(Fixed const& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = obj.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int		Fixed::toInt(void) const
{
	return (_value << _fBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _fBits));
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

std::ostream& operator<<(std::ostream& stream, Fixed const& rhs)
{
	stream << rhs.toFloat();
	return (stream);
}
