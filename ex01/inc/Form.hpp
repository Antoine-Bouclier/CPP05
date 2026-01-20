#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const unsigned int	_signGrade;
		const unsigned int	_executeGrade;
		bool				_signed;
	public:
		/* -- Constructors -- */
		Form();
		Form(std::string name, unsigned int signGrade, unsigned int executeGrade);
		
		/* -- Copy Constructor -- */
		Form(const Form &copy);

		/* -- Assignement operator -- */
		Form& operator=(const Form &src);

		/* -- Getters -- */
		std::string		getName() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecuteGrade() const;
		bool			getSigned() const;

		/* -- Member function -- */
		void	beSigned(const Bureaucrat &b);

		/* -- Destructor called. -- */
		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};


/* -- Overload operator ostream -- */
std::ostream& operator<<(std::ostream& os, const Form& f);

#endif