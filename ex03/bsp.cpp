/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 04:01:07 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/14 04:28:17 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

typedef Point Vector;

static Vector operator-(Vector const &a, Vector const &b)
{
	return Vector(a.get_x() - b.get_x(), a.get_y() - b.get_y());
}

Fixed dot(Vector &a, Vector &b)
{
	return a.get_x() * b.get_x() + a.get_y() * b.get_y();
}

static bool same_half_plane(Point const &l_a, Point const &l_b,
							Point const &p_a, Point const &p_b)
{
	Fixed zero(0);
	Vector vec_line(l_b - l_a);
	Vector normal(zero - vec_line.get_y(), vec_line.get_x());
	Vector vec_a(p_a - l_a);
	Vector vec_b(p_b - l_a);

	Fixed dot_line_a(dot(normal, vec_a));
	Fixed dot_line_b(dot(normal, vec_b));

	if ((dot_line_a > zero && dot_line_b > zero) ||
		(dot_line_a < zero && dot_line_b < zero))
		return true;
	return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (same_half_plane(a, b, c, point) &&
		same_half_plane(a, c, b, point) &&
		same_half_plane(b, c, a, point))
		return true;
	return false;
}