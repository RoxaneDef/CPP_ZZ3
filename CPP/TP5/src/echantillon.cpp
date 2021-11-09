//
// Created by roxan on 11/9/2021.
//

#include "echantillon.hpp"

int Echantillon::getTaille() const { return vect.size(); }

void Echantillon::ajouter(Valeur val_) { vect.push_back(val_); }

Valeur Echantillon::getMinimum() {
    if (getTaille() == 0) { throw std::domain_error("Erreur : Impossible de recuperer le minimum d'un vecteur vide"); }
    return *min_element(vect.begin(), vect.end());
}

Valeur Echantillon::getMaximum() {
    if (getTaille() == 0) { throw std::domain_error("Erreur : Impossible de recuperer le maximum d'un vecteur vide"); }
    return *max_element(vect.begin(), vect.end());
}

Valeur Echantillon::getValeur(int indice) {
    if (indice < 0 || indice >= getTaille()) { throw std::out_of_range("Erreur : L'indice est soit negatif soit trop grand"); }
    return vect[indice];
}