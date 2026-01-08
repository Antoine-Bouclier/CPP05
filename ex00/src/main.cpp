#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	b1;
	Bureaucrat	b2("John", 97);
	Bureaucrat	b3(b2);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	b3.incrementGrade();

	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
}