//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_HISTOGRAMME_HPP
#define CPP_HISTOGRAMME_HPP

#include <vector>

#include "classe.hpp"

class Histo {
public:
    Histo();

    Histo(double borneInf, double borneSup, int nbrClasse);

    std::vector <Classe> getClasses();

private:
    std::vector <Classe> vect;
};


#endif //CPP_HISTOGRAMME_HPP
