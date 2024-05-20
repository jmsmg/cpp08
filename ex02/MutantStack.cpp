#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : value_type(T), container_type(std::deque), size_type(0)
{
	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &mutanstack)
{
	if (this != &mutanstack)
	{
		this->value_type = mutanstack.value_type;
		this-size_type = mutanstack.size_type;
	}
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &mutanstack)
{

}


template <typename T>
MutantStack<T>::~MutantStack()
{

}