// Entetes //---------------------------------------------------------------------------------------
#include <algorithm>
#include <deque>
#include <vecteur.hpp>

// Fonction principale //---------------------------------------------------------------------------
int main(void) {
    complexe_t::stats();
    // ETAPE 1/6 - OK
    Vecteur v1;         // 10 constructions par defaut
    Vecteur v2;         // 10 constructions par defaut

    std::cout << std::endl << "v1 = " << v1 << std::endl;
    std::cout << "v2 = " << v2 << std::endl;

    complexe_t::stats();

    // ETAPE 2/6 - OK
    for (unsigned i = 0; i < v1.getTaille(); ++i) v1[i] = complexe_t(10 * i, i * i);    // 10 constructions ad hoc + 10 affectations par mouvement
    for (unsigned i = 0; i < v2.getTaille(); ++i) v2[i] = complexe_t(i, i + 1);         // 10 constructions ad hoc + 10 affectations par mouvement
    std::cout << std::endl << "v1 = " << v1 << std::endl;
    std::cout << "v2 = " << v2 << std::endl;

    complexe_t::stats();

    // ETAPE 3/6 - OK
    Vecteur v3 = v1;    // 10 constructions par defaut + 10 affectations par copie
    std::cout << std::endl << "v3 = " << v3 << std::endl;

    complexe_t::stats();

    // ETAPE 4/6
    Vecteur v4;         // 10 constructions par defaut
    v4 = v1 + v2;       // 10 affectations par copie + 10 constructions par defaut + 10 constructions ad hoc + 10 affectations par mouvement
    std::cout << std::endl << "v4 = " << v4 << std::endl;

    complexe_t::stats();

    // ETAPE 5/6
    Vecteur v5;             // 10 constructions par defaut
    v5 = v1 * (v2 + v4);    // 10 affectations par copie + (10 constructions par defaut + 10 constructions ad hoc + 10 affectations par mouvement) + (10 constructions par defaut + 10 constructions ad hoc + 10 affectations par mouvement)
    std::cout << std::endl << "v5 = " << v5 << std::endl;

    complexe_t::stats();

    // ETAPE 6/6
    std::deque <complexe_t> liste;
    for (unsigned i = 0; i < v5.getTaille(); ++i) liste.push_back(v5[i]);   //  10 constructions par copie | (Reference : par copie) ET (Double reference : par mouvement)
    std::cout << std::endl << "liste = v5" << std::endl;

    complexe_t::stats();

    // ETAPE 7/6
    std::sort(liste.begin(), liste.end(), ComparateurComplexe());

    std::cout << std::endl;
    for (unsigned i = 0; i < liste.size(); ++i) std::cout << liste[i] << " ";
    std::cout << std::endl;
    complexe_t::stats();
}

// Fin //-------------------------------------------------------------------------------------------
