#include "AForm.hpp"

AForm::AForm() : _name("default"), _sign_grade(15), _execute_grade(), _signed(false)
{
	std::cout << this->_name << ": Default constructor called." << std::endl;
}

AForm::AForm(std::string name, unsigned int sign_grade, unsigned int execute_grade)
 : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade), _signed(false)
{
	std::cout << this->_name << ": Parameterized constructor called." << std::endl;
	if (_sign_grade >= 150)
		throw GradeTooLowException();
	else if (_sign_grade <= 1)
		throw GradeTooHighException();
	if (_execute_grade >= 150)
		throw GradeTooLowException();
	else if (_execute_grade <= 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy)
: _name(copy._name), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade), _signed(copy._signed)
{
	std::cout << this->_name << ": Copy constructor called." << std::endl;
}

AForm& AForm::operator=(const AForm &src)
{
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string		AForm::getName() const
{
	return (this->_name);
}

unsigned int	AForm::getSignGrade() const
{
	return (this->_sign_grade);
}

unsigned int	AForm::getExecuteGrade() const
{
	return (this->_execute_grade);
}

bool			AForm::getSigned() const
{
	return (this->_signed);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw	GradeTooLowException();
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char*	AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed yet.");
}

std::ostream&	operator<<(std::ostream& os, const AForm& f)
{
	os << f.getName() << " AForm information:\n"
		<< "Name of the form: " << f.getName() << "\n"
		<< "Grade to sign the form: " << f.getSignGrade() << "\n"
		<< "Grade to execute the form: " << f.getExecuteGrade() << "\n";
	if (f.getSigned())
		os << "Form is already signed";
	else
		os << "Form is not signed yet";
	return (os);
}

AForm::~AForm()
{
	std::cout << this->_name << ": Destructor called." << std::endl;
}