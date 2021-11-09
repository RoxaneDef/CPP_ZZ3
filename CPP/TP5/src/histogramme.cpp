//
// Created by roxan on 11/9/2021.
//

#include "histogramme.hpp"

Histo::Histo() : Histo(0.0, 1.0, 0.1) {}

Histo::Histo(double borneInf, double borneSup, int nbrClasse) {
    double intervalle = (borneSup - borneInf) / nbrClasse;

    for (double i = 0; i < nbrClasse; i++) {
        ajouter(Classe(borneInf + i * intervalle, borneInf + (i + 1) * intervalle));
    }
}

std::vector <Classe> Histo::getClasses() { return vect; }

void Histo::ajouter(Classe classe_) { vect.push_back(classe_); }

void Histo::ajouter(Echantillon echantillon_) {
    Valeur val;

    for (int i = 0; i < echantillon_.getTaille(); i++) {
        val = echantillon_.getValeur(i);
        std::vector<Classe>::iterator it = getIteratorToCorrectClasse(val);
        (*it).ajouter();
    }
}

std::vector<Classe>::iterator Histo::getIteratorToCorrectClasse(Valeur val) {
    std::vector<Classe>::iterator it_;

    for (std::vector<Classe>::iterator it = vect.begin(); it != vect.end(); ++it) {
        if ((*it).getBorneInf() <= val.getNombre() && (*it).getBorneSup() >= val.getNombre()) {
            it_ = it;
        }
    }

    return it_;
}

