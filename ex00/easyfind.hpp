
#pragma once
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
