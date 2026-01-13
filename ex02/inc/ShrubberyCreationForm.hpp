#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		/* -- Constructors -- */
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &src);
		/* -- Destructor -- */
		~ShrubberyCreationForm();
};

#endif