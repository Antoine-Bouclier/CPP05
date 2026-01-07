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
		const std::string	getName() const;
		const unsigned int	getGrade() const;

		/* -- Destructors -- */
		~Bureaucrat();

		/* -- Member function -- */
		void	incrementGrade();
		void	decrementGrade();
};




#endif