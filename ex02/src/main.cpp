#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    std::cout << "===== CREATION DES BUREAUCRATS =====" << std::endl;
    Bureaucrat boss("Boss", 1);
    Bureaucrat manager("Manager", 50);
    Bureaucrat intern("Intern", 150);

    std::cout << boss << std::endl;
    std::cout << manager << std::endl;
    std::cout << intern << std::endl;

    std::cout << "\n===== CREATION DES FORMS =====" << std::endl;
    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    std::cout << shrub << std::endl;
    std::cout << robo << std::endl;
    std::cout << pardon << std::endl;

    std::cout << "\n===== TEST EXECUTION SANS SIGNATURE =====" << std::endl;
    try
    {
        boss.executeForm(shrub);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== SIGNATURE DES FORMS =====" << std::endl;
    intern.signForm(shrub);     // KO
    manager.signForm(shrub);   // OK
    manager.signForm(robo);    // KO
    manager.signForm(pardon);  // KO
    boss.signForm(robo);        // OK
    boss.signForm(pardon);     // OK

    std::cout << "\n===== EXECUTION DES FORMS =====" << std::endl;
    intern.executeForm(shrub);     // KO
    manager.executeForm(shrub);   // OK -> file _shrubbery
    manager.executeForm(robo);    // KO
    manager.executeForm(pardon);  // KO
    boss.executeForm(robo);         // OK
    boss.executeForm(pardon);     // OK

    std::cout << "\n===== DOUBLE EXECUTION =====" << std::endl;
    boss.executeForm(shrub); // OK

    std::cout << "\n===== FIN DES TESTS =====" << std::endl;
    return 0;
}
