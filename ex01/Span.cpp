#include "Span.hpp"

Span::Span() : _n(0), _vec()
{

}

Span::Span(const unsigned int N) : _n(N), _vec()
{
}

Span::Span(const Span &span)
{
	std::vector<int>	tmp;

	for (std::vector<int>::const_iterator it = span._vec.begin(); it != span._vec.end(); it++)
	{
		tmp.push_back(*it);
	}
	this->_n = span._n;
	this->_vec = tmp;
}

Span	&Span::operator=(const Span &span)
{
	if (this != &span)
	{
		std::vector<int>	tmp;

		for (std::vector<int>::const_iterator it = span._vec.begin(); it != span._vec.end(); it++)
		{
			tmp.push_back(*it);
		}
		this->_n = span._n;
	}
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(const unsigned int num)
{
	if (this->_n <= this->_vec.size())
	{
		throw (std::out_of_range("out of range"));
	}
	this->_vec.push_back(num);
}

long long	Span::shortestSpan(void)
{
	if (this->_vec.size() <= 1)
	{
		throw (std::length_error("length error"));
	}

	std::vector<int>::iterator i = this->_vec.begin();
	std::vector<int>::iterator j = i + 1;

	long long	shortestNumber = std::abs(static_cast<long long>(*i - *j));

	while (i < this->_vec.end() - 1)
	{
		j = i + 1;
		while (j < this->_vec.end())
		{
			if (std::abs(static_cast<long long>(*i) - static_cast<long long>(*j)) < shortestNumber)
			{
				shortestNumber = std::abs(static_cast<long long>(*i) - static_cast<long long>(*j));
			}
			j++;
		}
		i++;
	}
	return (shortestNumber);
}

long long	Span::longestSpan(void)
{
	if (this->_vec.size() <= 1)
	{
		throw (std::length_error("length error"));
	}

	long long	longestNumber = 0;
	long long	biggestNumber = *(this->_vec.begin());
	long long	smallestNumber = *(this->_vec.begin());

	for (std::vector<int>::iterator	it = this->_vec.begin(); it < this->_vec.end(); it++)
	{
		if (*it < smallestNumber)
		{
			smallestNumber = *it;
		}

		if (biggestNumber < *it)
		{
			biggestNumber = *it;
		}
	}

	longestNumber = std::abs(static_cast<long>(biggestNumber - smallestNumber));
	return (longestNumber);
}

unsigned int		Span::getN(void)
{
	return (this->_n);
}

std::vector<int>	&Span::getVec(void)
{
	return (this->_vec);
}