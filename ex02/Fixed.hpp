/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:44:54 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/13 02:00:53 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int value;
		static const int fractional = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed(const int int_value);
		Fixed(const float fp_value);

		Fixed &operator=(const Fixed &src);

		Fixed operator+(const Fixed &right) const;
		Fixed operator-(const Fixed &right) const;
		Fixed operator*(const Fixed &right) const;
		Fixed operator/(const Fixed &right) const;

		bool operator>(const Fixed &right) const;
		bool operator<(const Fixed &right) const;
		bool operator>=(const Fixed &right) const;
		bool operator<=(const Fixed &right) const;
		bool operator==(const Fixed &right) const;
		bool operator!=(const Fixed &right) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif

