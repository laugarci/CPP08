
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(0);
	vec.push_back(11);
	vec.push_back(24);
	vec.push_back(36);
	vec.push_back(41);
	vec.push_back(50);
	vec.push_back(90);
	vec.push_back(5);
	vec.push_back(1);

	std::cout << BGRED "Correct test" << RESET << std::endl;
	try {
		int index;
		int val;
		
		val = 5;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
		val = 24;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
		val = 1;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
		val = 41;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
		val = 90;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
		val = 0;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
		val = 1;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
		std::cout << BGRED "Incorrect test" << RESET << std::endl;
	try {
		int index;
		int val;
		val = 2;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
		try {
		int index;
		int val;

		val = 100;
		index = easyfind(vec, val);
		std::cout << "Value to search: " << val << std::endl << "Value found at index: " << index << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
