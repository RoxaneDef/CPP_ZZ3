//
// Created by roxan on 11/9/2021.
//

#include "echantillon.hpp"

int Echantillon::getTaille() const {
    return vect.size();
}

void Echantillon::ajouter(Valeur val_) {
    vect.push_back(val_);
}

Valeur Echantillon::getMinimum() {
    return *min_element(vect.begin(), vect.end());
}

Valeur Echantillon::getMaximum() {
    return *max_element(vect.begin(), vect.end());
}