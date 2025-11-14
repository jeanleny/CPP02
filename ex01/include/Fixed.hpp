#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
	public :
	Fixed();
	Fixed(Fixed const& obj);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();
	Fixed& operator=(Fixed const &rhs); 

	int		getRawBits(void) const;
	void	setRawBits(int	const raw);

	int			toInt(void)		const;
	float		toFloat(void)	const;
	private:
	int					_value;
	static const int	_fBits; 
};

std::ostream& operator<<(std::ostream& stream ,Fixed const& rhs); 

#endif
