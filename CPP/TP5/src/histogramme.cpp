//
// Created by roxan on 11/9/2021.
//

#include "histogramme.hpp"

Histo::Histo() : Histo(0.0, 1.0, 0.1) {}

Histo::Histo(double borneInf, double borneSup, int nbrClasse) {
    double intervalle = (borneSup - borneInf) / nbrClasse;

    for (double i = 0; i < nbrClasse; i++) {
        vect.push_back(Classe(borneInf + i * intervalle, borneInf + (i + 1) * intervalle));
    }
}

std::vector <Classe> Histo::getClasses() { return vect; }