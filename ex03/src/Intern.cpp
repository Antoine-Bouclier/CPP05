#include "Intern.hpp"

/* -- Constructors -- */
Intern::Intern()
{
	std::cout << "Intern: Default constructor called." << std::endl;
}

/* -- Copy Constructor -- */
Intern::Intern(const Intern &copy)
{
	std::cout << "Intern: Copy constructor called." << std::endl;
	*this = copy;
}

/* -- Assignement operator -- */
Intern& Intern::operator=(const Intern &src)
{
	std::cout << "Intern: Assignement operator called." << std::endl;
	if (this != &src)
		return (*this);
	return (*this);
}

AForm	*Intern::makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm		*Intern::makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makePresidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

/* -- Member function -- */
AForm *Intern::makeForm(const std::string form, const std::string target)
{
	Intern		intern;
	AForm*		(Intern::*ptr[])(const std::string target) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	std::string	name[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int	i;
	for (i = 0; i < 3; i++)
	{
		if (form.compare(name[i]) == 0)
		{
			std::cout << "Intern creates " << form << std::endl;
			return ((intern.*ptr[i])(target));
		}
	}
	std::cout << "Intern can not create a form called " << form << std::endl;
	return (NULL);
}

/* -- Destructor -- */
Intern::~Intern()
{
	std::cout << "Intern: Destructor called." << std::endl;
}