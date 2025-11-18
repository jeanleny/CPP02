#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iostream>

class Fixed
{
	public :
	Fixed();
	Fixed(Fixed const& obj);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();
	Fixed&	operator=(Fixed const &rhs); 
	bool	operator>(Fixed const &rhs) const; 
	bool	operator<(Fixed const &rhs) const; 
	bool	operator<=(Fixed const &rhs) const; 
	bool	operator>=(Fixed const &rhs) const; 
	bool	operator==(Fixed const &rhs) const; 
	bool	operator!=(Fixed const &rhs) const; 
	Fixed operator+(Fixed const &rhs) const; 
	Fixed operator-(Fixed const &rhs) const; 
	Fixed operator*(Fixed const &rhs) const; 
	Fixed operator/(Fixed const &rhs) const; 
	Fixed operator++(int); 
	Fixed operator--(int); 
	Fixed &operator++(); 
	Fixed &operator--();
	static Fixed &min(Fixed& nb1, Fixed& nb2);
	static Fixed &max(Fixed& nb1, Fixed& nb2);
	static const Fixed &min(const Fixed& nb1, const Fixed& nb2);
	static const Fixed &max(const Fixed& nb1, const Fixed& nb2);


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
