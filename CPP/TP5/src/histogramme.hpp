//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_HISTOGRAMME_HPP
#define CPP_HISTOGRAMME_HPP

#include <set>
#include <iostream>

#include "classe.hpp"
#include "echantillon.hpp"
#include "valeur.hpp"

template<typename T = std::less<Classe>>
class Histogramme {
public:
    Histogramme();

    Histogramme(double borneInf, double borneSup, int nbrClasse);

    std::set <Classe, T> getClasses();

    void ajouter(double double_);

    void ajouter(Classe classe_);

    void ajouter(Echantillon echantillon_);

    typename std::set<Classe, T>::iterator getIteratorToCorrectClasse(Valeur val);

private:
    std::set <Classe, T> s;
};

#include "histogramme.impl.hpp"

#endif //CPP_HISTOGRAMME_HPP
