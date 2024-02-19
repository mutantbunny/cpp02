/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 00:10:29 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/19 00:13:40 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

#include "Point.hpp"

typedef Point Vector;

// bsp.cpp
bool bsp(Point const a, Point const b, Point const c, Point const point);
void print_inside(Point const a, Point const b,
				Point const c, Point const point);

#endif
