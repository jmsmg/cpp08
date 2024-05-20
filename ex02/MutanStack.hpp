#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutanStack : public std::stack<T>
{
	public:
		MutanStack();
		MutanStack(const MutanStack &mutanstack);
		MutanStack &operator=(const MutanStack &mutanstack);
		~MutanStack();

		typedef typename	MutanStack<T>::stack::iterator iterator;
		iterator			begin(void)
		{
			return (c.begin());
		}
	
		iterator	end(void)
		{
			return (c.end());
		}

};

#endif