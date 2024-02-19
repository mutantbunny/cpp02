/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:19:13 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/19 00:06:58 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0) { }
Point::Point(const float x, const float y): x(x), y(y) { }
Point::Point(const Fixed &x, const Fixed &y): x(x), y(y) { }
Point::Point(const Point &src): x(src.get_x()),  y(src.get_y()) { }

Point::~Point(void) { }

Point &Point::operator=(const Point &src)
{
	(void)src;

	std::cerr << "Point class cannot use assignment,"
					" members x and y are constant." << std::endl;
	return *this;
}

Fixed Point::get_x(void) const { return x; }

Fixed Point::get_y(void) const { return y; }


std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << "Point(" << point.get_x() << ", "
		<< point.get_y() << ")";
	return out;
}