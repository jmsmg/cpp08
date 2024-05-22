#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> vec(5);

	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 4);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::list<int> l(5);

	for (int i = 0; i < 5; i++)
	{
		l.push_back(i);
	}

	const std::list<int> tmp(l);	
	try
	{
		const std::list<int>::const_iterator it = easyfind(tmp, 4);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::vector<int> vec2(5);

	for (int i = 0; i < 5; i++)
	{
		vec2.push_back(i);
	}
	try
	{
		std::vector<int>::iterator it = easyfind(vec2, 6);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}