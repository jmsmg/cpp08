#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <typeinfo>
#include <cmath>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_vec;

    public:
		Span();
		Span(const unsigned int N);
		Span(const Span &span);
		Span	&operator=(const Span &span);
		~Span();

		unsigned int		getN(void);
		std::vector<int>	&getVec(void);
		void				addNumber(const unsigned int num);
		long long			shortestSpan(void);
		long long			longestSpan(void);
		template <typename T>
		void	fillrange(typename T::iterator start, typename T::iterator last)
		{
			if (typeid(*start) != typeid(int) || typeid(*last) != typeid(int))
			{
				throw (std::invalid_argument("type error"));
			}
			while (start < last)
			{
				this->addNumber(*start);
				start++;
			}
			std::cout << std::endl;
		}
};

#endif