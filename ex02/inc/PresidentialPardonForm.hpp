#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		/* -- Constructors -- */
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &src);
		/* -- Destructor -- */
		~PresidentialPardonForm();
};

#endif