/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:44:54 by gmachado          #+#    #+#             */
/*   Updated: 2023/11/12 05:16:36 by gmachado         ###   ########.fr       */
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
		Fixed(Fixed &src);

		Fixed &operator=(Fixed &src);

		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
