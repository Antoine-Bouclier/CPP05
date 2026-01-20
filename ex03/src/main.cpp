#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* form;

	std::cout << "Test 1: Shrubbery " << std::endl;
	form = someRandomIntern.makeForm("shrubbery creation", "Home");
	if (form)
	{
		std::cout << *form << std::endl;
		delete form;
	}

	std::cout << "\n Test 2: Robotomy " << std::endl;
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form)
	{
		std::cout << *form << std::endl;
		delete form;
	}

	std::cout << "\n Test 3: Presidential " << std::endl;
	form = someRandomIntern.makeForm("presidential pardon", "Marvin");
	if (form)
	{
		std::cout << *form << std::endl;
		delete form;
	}

	std::cout << "\n Test 4: Unknown form " << std::endl;
	form = someRandomIntern.makeForm("unknown", "Nobody");
	if (!form)
		std::cout << "Form creation failed." << std::endl;

	return 0;
}

