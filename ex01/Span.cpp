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

int	Span::shortestSpan(void)
{
	if (this->_vec.size() <= 1)
	{
		throw (std::length_error("length error"));
	}

	std::vector<int>::iterator i = this->_vec.begin();
	std::vector<int>::iterator j = i + 1;

	int	shortestNumber = std::abs(*i - *j);

	while (i < this->_vec.end() - 1)
	{
		j = i + 1;
		while (j < this->_vec.end())
		{
			if (std::abs(*i - *j) < shortestNumber)
			{
				shortestNumber = std::abs(*i - *j);
			}
			j++;
		}
		i++;
	}
	return (shortestNumber);
}

int	Span::longestSpan(void)
{
	if (this->_vec.size() <= 1)
	{
		throw (std::length_error("length error"));
	}

	int	biggestNumber = *(std::max_element(this->_vec.begin(), this->_vec.end()));
	int	smallestNumber = *(std::min_element(this->_vec.begin(), this->_vec.end()));

	return (biggestNumber - smallestNumber);
}

unsigned int		Span::getN(void)
{
	return (this->_n);
}

std::vector<int>	&Span::getVec(void)
{
	return (this->_vec);
}