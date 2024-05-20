#include "MutanStack.hpp"

template <typename T>
MutanStack<T>::MutanStack(void) : value_type(T), container_type(std::deque), size_type(0)
{

}

template <typename T>
MutanStack<T>::MutanStack(const MutanStack &mutanstack)
{
	if (this != &mutanstack)
	{
		this->value_type = mutanstack.value_type;
		this-size_type = mutanstack.size_type;
	}
}

template <typename T>
MutanStack<T>	&MutanStack<T>::operator=(const MutanStack &mutanstack)
{

}


template <typename T>
MutanStack<T>::~MutanStack()
{

}