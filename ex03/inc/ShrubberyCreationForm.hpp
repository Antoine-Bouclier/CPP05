#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <stdlib.h>
#include <fstream>

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

		/* -- Getter -- */
		std::string	getTarget() const;

		void	execute(Bureaucrat const &executor) const;
};

#endif