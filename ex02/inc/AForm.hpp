#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const unsigned int	_sign_grade;
		const unsigned int	_execute_grade;
		bool				_signed;
	public:
		/* -- Constructors -- */
		AForm();
		AForm(std::string name, unsigned int sign_grade, unsigned int execute_grade);
		
		/* -- Copy Constructor -- */
		AForm(const AForm &copy);

		/* -- Assignement operator -- */
		AForm& operator=(const AForm &src);

		/* -- Getters -- */
		std::string		getName() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecuteGrade() const;
		bool			getSigned() const;

		/* -- Member function -- */
		void	beSigned(Bureaucrat b);

		/* -- Pure virtual function -- */
		virtual void	execute(Bureaucrat const &executor) const = 0;

		/* -- Destructor -- */
		virtual ~AForm();

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

		class FormNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
};


/* -- Overload operator ostream -- */
std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif