#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "TEST 1: grade above 150" << std::endl;
	try
	{
		Bureaucrat	b1("John", 200);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "TEST 1: grade under 1" << std::endl;
	try
	{
		Bureaucrat	b1("John", 0);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "TEST 2: decrement grade" << std::endl;
	try
	{
		Bureaucrat	b2;
		b2.decrementGrade();
		std::cout << b2.getGrade() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "TEST 3: increment grade" << std::endl;
	try
	{
		Bureaucrat	b3("Romain", 1);
		b3.incrementGrade();
		std::cout << b3.getGrade() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	return (0);
}