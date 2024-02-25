
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(2);
	easyfind(vec, 2);

	try {
		int index = easyfind(vec, 2);
		std::cout << "Value found at index: " << index << std::endl; 
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
