#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 145, 137), _target("default")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 145, 137), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("RobotomyRequestForm", 145, 137), _target(copy._target)
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