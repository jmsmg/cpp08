#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int> a = mstack;
	MutantStack<int> b(mstack);

	MutantStack<int>::iterator it = a.begin();
	MutantStack<int>::iterator ite = a.end();
	// MutantStack<int>::reverse_iterator it = a.rbegin();
	// MutantStack<int>::reverse_iterator ite = a.rend();

	++it;

	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "---------------- list ---------------" << std::endl;

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << list.back() << std::endl;

	list.pop_back();

	std::cout << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator it1 = list.begin();
	std::list<int>::iterator ite1 = list.end();

	++it1;

	--it1;

	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::list<int> l(list);

	return (0);
}