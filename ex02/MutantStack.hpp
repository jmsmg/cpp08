#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &mutantstack);
		MutantStack &operator=(const MutantStack &mutantstack);
		~MutantStack();

		typedef typename	MutantStack<T>::container_type::iterator iterator;
		iterator			begin(void)
		{
			return (this->c.begin());
		}
	
		iterator	end(void)
		{
			return (this->c.end());
		}

};

#endif