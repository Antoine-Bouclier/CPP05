#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 145, 137), _target("default")
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 145, 137), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("PresidentialPardonForm", 145, 137), _target(copy._target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}