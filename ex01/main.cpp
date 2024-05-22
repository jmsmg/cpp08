#include "Span.hpp"

int main()
{
	try
	{
		Span	sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		// size error부분
		// sp.addNumber(11);
		Span	tmp = Span(1000);


		// std::vector<int>::iterator start = sp.getVec().begin();
		// std::vector<int>::iterator end = sp.getVec().end();
	
		tmp.fillrange< std::vector<int> >(sp.getVec().begin(), sp.getVec().end());

		for (std::vector<int>::iterator it = tmp.getVec().begin(); it < tmp.getVec().end(); it++)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}