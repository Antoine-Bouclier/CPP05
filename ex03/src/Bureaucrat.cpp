#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
	std::cout << this->_name << ": Default constructor called." << std::endl;
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	std::cout << this->_name << ": Parameterized Constructor called." << std::endl;
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout << this->_name << ": Copy Constructor called." << std::endl;
	this->setGrade(copy._grade);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << this->_name << ": Assignement operator called." << std::endl;
	if (this != &src)
		this->setGrade(src._grade);
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(unsigned int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150) 
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout
			<< this->getName() << " couldn't sign "
			<< f.getName() << " because "
			<< this->getName() << " have a grade of "
			<< this->getGrade() << " and need a "
			<< f.getSignGrade() << " grade." <<
		std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << f.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName()
			<< " executed "
			<< form.getName()
			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name << ": Destructor called." << std::endl;
}