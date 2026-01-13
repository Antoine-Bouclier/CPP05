#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
	public:
		/* -- Constructors -- */
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &src);
		/* -- Destructor -- */
		~RobotomyRequestForm();

		/* -- Getter -- */
		std::string	getTarget() const;

		void	execute(Bureaucrat const &executor) const;
};

#endif