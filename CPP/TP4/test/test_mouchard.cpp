// Entetes //---------------------------------------------------------------------------------------
#include <iostream>
#include <complexe.hpp>

// Fonction principale //---------------------------------------------------------------------------
int main(void) {
    complexe_t::stats();

    std::cout << std::endl << "complexe_t c1(1,2);" << std::endl;
    complexe_t c1(1, 2);            // Constructeur ad hoc
    complexe_t::stats();

    std::cout << std::endl << "complexe_t c2(3,4);" << std::endl;
    complexe_t c2(3, 4);            // Constructeur ad hoc
    complexe_t::stats();

    std::cout << std::endl << "complexe_t c3(c1);" << std::endl;
    complexe_t c3(c1);              // Constructeur par copie
    complexe_t::stats();

    std::cout << std::endl << "complexe_t c4(std::move(c2));" << std::endl;
    complexe_t c4(std::move(c2));   // Constructeur de mouvement
    complexe_t::stats();

    std::cout << std::endl << "c3=c1;" << std::endl;
    c3 = c1;                        // Affectation par copie
    complexe_t::stats();

    std::cout << std::endl << "c4=complexe_t(5,6);" << std::endl;
    c4 = complexe_t(5, 6);          // Construction ad hoc + Affectation par mouvement
    complexe_t::stats();

    // Affectation par mouvement : apres l'affectation, ce qui a servit pour l'affectation est soit vide
    // soit n'existe plus du tout !
    // Affectation par copie : apres l'affectation, ce qui a servit pour l'affectation contient existe tjrs

    return 0;
}

// Fin //-------------------------------------------------------------------------------------------
