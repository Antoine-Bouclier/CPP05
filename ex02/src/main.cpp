#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	std::cout << "TEST 1" << std::endl;
	try
	{
		Bureaucrat	b1("John", 130);
		Form		f1("helldivers", 135, 125);

		b1.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	return (0);
}