/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:19:11 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/14 04:10:49 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Fixed &x, const Fixed &y);
		Point(const Point &src);

		~Point(void);

		Point &operator=(const Point &src);

		Fixed get_x(void) const;
		Fixed get_y(void) const;
};

std::ostream &operator<<(std::ostream &out, const Point &point);

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
