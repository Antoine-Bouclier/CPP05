#include "Form.hpp"

Form::Form() : _name("default"), _sign_grade(15), _execute_grade(), _signed(false)
{
	std::cout << this->_name << ": Default constructor called." << std::endl;
}

Form::Form(std::string name, unsigned int sign_grade, unsigned int execute_grade)
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

Form::Form(const Form &copy)
: _name(copy._name), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade), _signed(copy._signed)
{
	std::cout << this->_name << ": Copy constructor called." << std::endl;
}

Form& Form::operator=(const Form &src)
{
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string		Form::getName() const
{
	return (this->_name);
}

unsigned int	Form::getSignGrade() const
{
	return (this->_sign_grade);
}

unsigned int	Form::getExecuteGrade() const
{
	return (this->_execute_grade);
}

bool			Form::getSigned() const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw	GradeTooLowException();
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream&	operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << " form information:\n"
		<< "Name of the form: " << f.getName() << "\n"
		<< "Grade to sign the form: " << f.getSignGrade() << "\n"
		<< "Grade to execute the form: " << f.getExecuteGrade() << "\n";
	if (f.getSigned())
		os << "Form is already signed";
	else
		os << "Form is not signed yet";
	return (os);
}

Form::~Form()
{
	std::cout << this->_name << ": Destructor called." << std::endl;
}