#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		/* -- Constructors -- */
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		
		/* -- Copy Constructor -- */
		Bureaucrat(const Bureaucrat &copy);

		/* -- Assignement operator -- */
		Bureaucrat& operator=(const Bureaucrat &src);

		/* -- Getters -- */
		std::string	getName() const;
		unsigned int	getGrade() const;

		/* -- Setter -- */
		void	setGrade(unsigned int grade);

		/* -- Destructors -- */
		~Bureaucrat();

		/* -- Member function -- */
		void	incrementGrade();
		void	decrementGrade();

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
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);


#endif