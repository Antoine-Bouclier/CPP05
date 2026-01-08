#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		this->_grade = src._grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

const unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade > 1)
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
}

Bureaucrat::~Bureaucrat()
{
}