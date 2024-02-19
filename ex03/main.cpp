/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:45:00 by gmachado          #+#    #+#             */
/*   Updated: 2024/02/19 00:18:37 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

int main(void)
{
	Point vertex_a(0.0f, 0.0f);
	Point vertex_b(0.0f, 2.0f);
	Point vertex_c(2.0f, 0.0f);

	Point inside(0.5f, 0.5f);
	Point outside(5.0f, 5.0f);
	Point on_side(0.0f, 0.5f);

	std::cout << "Expected: " << inside << " should be inside the triangle.\n";
	std::cout << "Result: ";
	print_inside(vertex_a, vertex_b, vertex_c, inside);
	std::cout << "\nExpected: " << outside
		<< " should be outside the triangle.\n";
	std::cout << "Result: ";
	print_inside(vertex_a, vertex_b, vertex_c, outside);
	std::cout << "\nExpected: " << on_side << " should be on one "
				"of the sides of the triangle.\n";
	std::cout << "Result: ";
	print_inside(vertex_a, vertex_b, vertex_c, on_side);

	return 0;
}
