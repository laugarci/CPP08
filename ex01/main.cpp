/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:14:45 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/28 17:05:49 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << BGRED "[ SUBJECT TEST ]" RESET << std::endl;
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << BGRED "[ MORE TEST ]" RESET << std::endl;
	std::cout << GREEN "Correct tests: " RESET << std::endl;
	try	{
		Span s = Span(5);
		std::vector<int> v;
		v.push_back(6);
		v.push_back(3);
		v.push_back(1);
		v.push_back(9);
		v.push_back(11);
		s.addRange(v.begin(), v.end());
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << RED "Incorrect tests: " RESET << std::endl;
	try	{
		Span s = Span(2);
		std::vector<int> v;
		v.push_back(6);
		v.push_back(3);
		v.push_back(1);
		v.push_back(9);
		v.push_back(11);
		s.addRange(v.begin(), v.end());
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error" << std::endl;
	}

	try	{
		Span s = Span(-1);
		std::vector<int> v;
		v.push_back(6);
		v.push_back(3);
		v.push_back(1);
		v.push_back(9);
		v.push_back(11);
		s.addRange(v.begin(), v.end());
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error" << std::endl;
	}



	return (0);
}
