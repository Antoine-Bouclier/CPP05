#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		
	public:
		/* -- Constructor -- */
		Intern();
		
		/* -- Copy Constructor -- */
		Intern(const Intern &copy);

		/* -- Assignement operator -- */
		Intern& operator=(const Intern &src);

		/* -- Member function -- */
		AForm	*makeForm(const std::string form, const std::string target);
		AForm	*makeShrubbery(const std::string target);
		AForm	*makeRobotomy(const std::string target);
		AForm	*makePresidential(const std::string target);

		/* -- Destructor -- */
		~Intern();
};

#endif