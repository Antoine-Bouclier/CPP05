#include "Form.hpp"

Form::Form() : _name("default"), _sign_grade(15), _execute_grade(), _signed(false)
{
}

Form::Form(std::string name, unsigned int sign_grade, unsigned int execute_grade)
 : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade), _signed(false)
{
}

Form::Form(const Form &copy)
: _name(copy._name), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade), _signed(copy._signed)
{
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

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
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
		os << "form is not signed yet";
	else
		os << "form is already signed";
	return (os);
}

Form::~Form()
{
}