#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "TEST 1" << std::endl;
	try
	{
		Bureaucrat	b1("John", 130);
		Form		f1("helldivers", 135, 125);

		std::cout << "\n" << f1  << "\n" << std::endl;
		b1.signForm(f1);
		std::cout << "\n" << f1 << "\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\nTEST 2" << std::endl;
	try
	{
		Bureaucrat	b1("John", 140);
		Form		f1("helldivers", 135, 125);

		b1.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	return (0);
}