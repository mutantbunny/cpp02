/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:44:48 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/12 05:33:42 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	value = src.getRawBits();
}

Fixed &Fixed::operator=(Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}