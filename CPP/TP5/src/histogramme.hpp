//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_HISTOGRAMME_HPP
#define CPP_HISTOGRAMME_HPP

#include <vector>
#include <iostream>

#include "classe.hpp"
#include "echantillon.hpp"
#include "valeur.hpp"

class Histo {
public:
    Histo();

    Histo(double borneInf, double borneSup, int nbrClasse);

    std::vector <Classe> getClasses();

    void ajouter(Classe classe_);

    void ajouter(Echantillon echantillon_);

    std::vector<Classe>::iterator getIteratorToCorrectClasse(Valeur val);

private:
    std::vector <Classe> vect;
};


#endif //CPP_HISTOGRAMME_HPP
