/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:15:14 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/28 14:17:29 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {
	private:
		 unsigned int _num;
		 std::vector<int> _vec;
	public:
		Span(unsigned int num);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);
		void	addNumber(int n);
		
};

#endif
