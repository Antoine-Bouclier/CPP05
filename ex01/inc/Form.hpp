#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		const unsigned int	_sign_grade;
		const unsigned int	_execute_grade;
		bool				_signed;
	public:
		/* -- Constructors -- */
		Form();
		Form(std::string name, unsigned int sign_grade, unsigned int execute_grade);
		
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
		void	beSigned(Bureaucrat b);

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