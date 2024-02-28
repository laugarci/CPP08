
#pragma once

#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define BGRED "\x1B[41m"
#define GREEN "\x1B[32m"

#include <vector>
#include <iostream>

template <typename T> int easyfind(const T& array, int num) 
{
	typename T::const_iterator it;
	for (it = array.begin(); it != array.end(); it++)
	{
		if (*it== num)
			return (std::distance(array.begin(), it));
	}
	throw std::runtime_error("Value not found in container");
}
