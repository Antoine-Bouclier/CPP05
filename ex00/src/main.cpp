#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1("John", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b2;
		b2.decrementGrade();
		std::cout << b2.getGrade() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "Nice!" << std::endl;
	return (0);
}