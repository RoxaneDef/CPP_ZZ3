//
// Created by roxan on 10/07/2021.
//

#include "vecteur.hpp"

/* Début des méthodes nécessaires pour forme de COPLIEN */
Vecteur::Vecteur() {}

Vecteur::Vecteur(const Vecteur &unVecteur) {
    tab = unVecteur.tab;
}

Vecteur &Vecteur::operator=(const Vecteur &unVecteur) {
    if (this != &unVecteur) {
        tab = unVecteur.tab;
    }

    return *this;
}

/* Fin des méthodes nécessaires pour forme de COPLIEN */

int Vecteur::size() const {
    return tab.size();
}

/*
const int &Vecteur::operator[](int index) const {
    if (index >= 0 and index <= tab.size()) {
        return tab[0];
    } else {
        throw OutOfRangeException();
    }
}

int &Vecteur::operator[](int index) {
    if (index >= 0 and index <= tab.size()) {
        return tableau[index];
    } else {
        throw OutOfRangeException();
    }
}

void Vecteur::push_back(int unEntier) {
    if (taille == capacite) {
        capacite = 2 * capacite;
        int temp[taille] = {};
        memcpy(temp, tableau, taille * sizeof(int));
        tableau = new int[capacite];
        memcpy(tableau, temp, taille * sizeof(int));
    }
    tableau[taille] = unEntier;
    taille++;
}

void Vecteur::afficher() {
    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i];
    }
    std::cout << std::endl;
}
 */