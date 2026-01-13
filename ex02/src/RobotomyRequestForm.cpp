#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("RobotomyRequestForm", 72, 45), _target(copy._target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw	(Bureaucrat::GradeTooLowException());
	else if (!this->getSigned())
		throw	(FormNotSigned());
	else if (rand() % 2)
		std::cout << "Drilling noises/n" << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << this->_target << " robotomy failed." << std::endl;
}