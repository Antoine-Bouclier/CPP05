#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* form;

    std::cout << "Test 1: Shrubbery " << std::endl;
    form = someRandomIntern.makeForm("ShrubberyCreationForm", "Home");
    if (form)
    {
        std::cout << *form << std::endl;
        delete form;
    }

    std::cout << "\n Test 2: Robotomy " << std::endl;
    form = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    if (form)
    {
        std::cout << *form << std::endl;
        delete form;
    }

    std::cout << "\n Test 3: Presidential " << std::endl;
    form = someRandomIntern.makeForm("PresidentialPardonForm", "Marvin");
    if (form)
    {
        std::cout << *form << std::endl;
        delete form;
    }

    std::cout << "\n Test 4: Unknown form " << std::endl;
    form = someRandomIntern.makeForm("UnknownForm", "Nobody");
    if (!form)
        std::cout << "Form creation failed as expected." << std::endl;

    return 0;
}

