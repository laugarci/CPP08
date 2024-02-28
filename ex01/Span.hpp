/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:15:14 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/28 16:54:37 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
# include <vector>
# include <algorithm>


#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define BGRED "\x1B[41m"
#define GREEN "\x1B[32m"


class Span
{
	private:
		 unsigned int _size;
		 std::vector<int> _nums;
	public:
		Span(unsigned int size);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
