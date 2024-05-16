#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
const typename T::iterator	easyfind(const T &container, const int num) throw(std::runtime_error)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
	{
		throw (std::runtime_error("number not found"));
	}
	return (iter);
}

template <typename T>
typename T::iterator	easyfind(T &container, int num) throw(std::runtime_error)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
	{
		throw (std::runtime_error("number not found"));
	}
	return (iter);
}
#endif