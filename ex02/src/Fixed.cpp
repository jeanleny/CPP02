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
	_value = nb *(1 << _fBits);
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


 /*OVERLOAD_OPERATOR*/


Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed	result;

	result._value = this->_value + rhs._value;
	return (result);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed	result;

	result._value = this->_value - rhs._value;
	return (result);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed	result;

	long tmp = this->_value * rhs._value;
	result._value = tmp / (1 << _fBits);
	return (result);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed	result;
	
	long tmp = (1 << _fBits) * this->_value ;
	result._value = roundf(tmp / (float)rhs._value);
	return (result);
}

//Post increments
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	this->operator++();
	return(tmp);
}

Fixed &Fixed::operator++()
{
	++this->_value;
	return (*this);
}

//Post decrements
Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	this->_value--;
	return(*this);

}

Fixed &Fixed::operator--()
{
	--this->_value;
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	if (this->_value > rhs._value && !operator==(rhs))
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const& rhs)
{
	return (!operator>(rhs) && !operator==(rhs));
}

bool	Fixed::operator<=(Fixed const& rhs)
{
	return (!operator>(rhs));
}

bool	Fixed::operator>=(Fixed const& rhs)
{
	return (!operator<(rhs));
}

bool	Fixed::operator==(Fixed const& rhs)
{
	return(this->_value == rhs._value);
}

bool	Fixed::operator!=(Fixed const& rhs)
{
	return(!operator==(rhs));
}

Fixed &Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return(nb2);
}

Fixed &Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return(nb2);
}

const Fixed &Fixed::min(const Fixed& nb1, const Fixed& nb2)
{
	if (&nb1 > &nb2)
		return (nb1);
	return(nb2);
}

const Fixed &Fixed::max(const Fixed& nb1, const Fixed& nb2)
{
	if (&nb1 < &nb2)
		return (nb1);
	return(nb2);
}

std::ostream& operator<<(std::ostream& stream, Fixed const& rhs)
{
	stream << rhs.toFloat();
	return (stream);
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
