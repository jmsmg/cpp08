#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &mutantstack) : std::stack<T>(mutantstack)
		{
		};
		MutantStack &operator=(const MutantStack &mutantstack)
		{
			if (this != &mutantstack)
			{
				std::stack<T>::operator=(mutantstack);
			}
			return (*this);
		};
		~MutantStack() {};

		typedef typename	MutantStack<T>::container_type::iterator iterator;
		iterator			begin(void)
		{
			return (this->c.begin());
		}
	
		iterator	end(void)
		{
			return (this->c.end());
		}

		typedef typename	MutantStack<T>::container_type::const_iterator const_iterator;

		const_iterator	cbegin(void)
		{
			return (this->c.begin());
		}

		const_iterator	cend(void)
		{
			return (this->c.end());
		}

		typedef typename	MutantStack<T>::container_type::reverse_iterator reverse_iterator;

		reverse_iterator	rbegin(void)
		{
			return (this->c.rbegin());
		}

		reverse_iterator	rend(void)
		{
			return (this->c.rend());
		}

		typedef typename	MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		const_reverse_iterator	crbegin(void)
		{
			return (this->c.rbegin());
		}

		const_reverse_iterator	crend(void)
		{
			return (this->c.rend());
		}

};

#endif