#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw	(Bureaucrat::GradeTooLowException());
	else if (!this->getSigned())
		throw	(FormNotSigned());
	else
	{
		std::ofstream file(this->getTarget().append("_shrubbery"));

		file << 
			"		 &&" << std::endl <<
			"	    &&&&" << std::endl <<
			"	  &&&&&&&&" << std::endl <<
			"   &&&&&&&&&&&&" << std::endl <<
			"		&&&&" << std::endl <<
			"	  &&&&&&&&" << std::endl <<
			"	&&&&&&&&&&&&" << std::endl <<
			" &&&&&&&&&&&&&&&&" << std::endl <<
			"       ||||" << std::endl <<
			"       ||||" << std::endl <<
			"       ||||" << std::endl <<
		std::endl;

		file.close();
	}
}