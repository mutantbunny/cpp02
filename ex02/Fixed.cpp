/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:44:48 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/13 03:12:09 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) { }

Fixed::Fixed(const Fixed &src) { *this = src; }

Fixed::Fixed(const int int_value) { value = int_value << fractional; }

Fixed::Fixed(const float fp_value)
{
	value = (fp_value * (1 << fractional) + (fp_value >= 0 ? 0.5f : -0.5f));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	value = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void) { }

int Fixed::getRawBits(void) const { return value; }

void Fixed::setRawBits(int const raw) { value = raw; }

float Fixed::toFloat(void) const
{
	return ((float)value / (1 << fractional));
}

int Fixed::toInt(void) const
{
	return (value >> fractional);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
Fixed Fixed::operator+(const Fixed &right) const
{
	Fixed temp(right);
	temp.setRawBits(value + temp.getRawBits());
	return temp;
}

Fixed Fixed::operator-(const Fixed &right) const
{
	Fixed temp(right);
	temp.setRawBits(value - temp.getRawBits());
	return temp;
}

Fixed Fixed::operator*(const Fixed &right) const
{
	Fixed temp_obj;
	long int temp_value = ((long int)value * right.getRawBits()) >> fractional;
	temp_obj.setRawBits((int)temp_value);
	return temp_obj;
}

Fixed Fixed::operator/(const Fixed &right) const
{
	Fixed temp_obj;
	long int temp_value = ((long int)value << fractional) / right.getRawBits();
	temp_obj.setRawBits((int)temp_value);
	return temp_obj;
}

bool Fixed::operator>(const Fixed &right) const
{
	return value > right.getRawBits();
}

bool Fixed::operator<(const Fixed &right) const
{
	return value < right.getRawBits();
}

bool Fixed::operator>=(const Fixed &right) const
{
	return value >= right.getRawBits();
}

bool Fixed::operator<=(const Fixed &right) const
{
	return value <= right.getRawBits();
}

bool Fixed::operator==(const Fixed &right) const
{
	return value == right.getRawBits();
}

bool Fixed::operator!=(const Fixed &right) const
{
	return value != right.getRawBits();
}

Fixed &Fixed::operator++(void)
{
	value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	value++;
	return temp;
}

Fixed &Fixed::operator--(void)
{
	value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	value--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a,const Fixed &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}
