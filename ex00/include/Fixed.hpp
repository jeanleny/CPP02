#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
	Fixed();
	Fixed(Fixed const& obj);
	~Fixed();
	Fixed& operator=(Fixed const &rhs); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	private:
	int					_value;
	static const int	_fBits;
};

#endif
