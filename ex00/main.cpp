#include "easyfind.hpp"
#include <vector>

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