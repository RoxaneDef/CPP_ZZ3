//
// Created by roxan on 11/9/2021.
//

#include "valeur.hpp"

Valeur::Valeur() : val(0.0) {}

Valeur::Valeur(double val_) : val(val_) {}

double Valeur::getNombre() const {
    return val;
}

void Valeur::setNombre(double val_) {
    val = val_;
}

// Fonction de comparaison de deux valeurs
bool operator<(const Valeur &val1, const Valeur &val2) {
    return val1.val < val2.val;
}
