/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:45:00 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/13 03:16:14 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a created by default constructor: " << a << std::endl;
	std::cout << "Pre-increment a: " << ++a << std::endl;
	std::cout << "After pre-increment: " << a << std::endl;
	std::cout << "Post-increment a: " << a++ << std::endl;
	std::cout << "After post-increment: " << a << std::endl;
	std::cout << "b = 5.05 * 2: " << b << std::endl;
	std::cout << "Maximum between a and b: " << Fixed::max(a, b) << std::endl;
	std::cout << "Minimum between a and b: " << Fixed::min(a, b) << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "b / a: " << b / a << std::endl;

	return 0;
}