/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:29:08 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/29 16:25:18 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void more_test()
{
	std::cout << BGRED "[ MORE TESTS ]" RESET << std::endl;
	MutantStack<int> s;
	for (unsigned int i = 10; i < 20; i++)
		s.push(i);
	MutantStack<int>::iterator it = s.begin();
	MutantStack<int>::iterator it2 = s.end();
	while (it != it2)
	{
		std::cout << *it << std::endl;
		it++;
	}

}

int subject_test()
{
	std::cout << BGRED "[ SUBJECT TEST ]" RESET << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

int main()
{
	subject_test();
	more_test();
}
