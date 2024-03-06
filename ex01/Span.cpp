/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:19:17 by laugarci          #+#    #+#             */
/*   Updated: 2024/03/06 13:02:09 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int num)
{
	if ((int)num < 0)
		throw std::exception();
	_size = num;
	_nums.reserve(num);
}

Span::~Span()
{
}

Span::Span(const Span& other)
{
	*this = other;
}

Span &Span::operator=(const Span& other)
{
	   if (this != &other)
    {
        _nums = other._nums;
        _size = other._size;
    }
	return(*this);
}
void Span::addNumber(int num)
{
	if (_nums.size() >= _size)
		throw std::overflow_error("Span is full, cannot add more numbers.");	_nums.push_back(num);
}

int	Span::shortestSpan()
{
	if (_nums.size() <= 1)
		throw std::exception();
	std::sort(_nums.begin(), _nums.end());
	int shortest = _nums[1] - _nums[0];
	for (size_t i = 2; i < _nums.size(); ++i)
	{
		int span = _nums[i] - _nums[i - 1];
		if (span < shortest) {
			shortest = span;
		}
	}
	return shortest;
}

int	Span::longestSpan()
{
	if (_nums.size() <= 1)
		throw std::exception();
	std::vector<int> n = _nums;
    std::sort(n.begin(), n.end());
    return (n[n.size() - 1] - n[0]);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}
