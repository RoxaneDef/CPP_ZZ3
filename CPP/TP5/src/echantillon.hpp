//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_ECHANTILLON_HPP
#define CPP_ECHANTILLON_HPP

#include <algorithm>
#include <stdexcept>
#include <vector>

#include "valeur.hpp"

class Echantillon {
public:
    int getTaille() const;

    void ajouter(Valeur val_);

    typename std::vector<Valeur>::iterator begin();

    typename std::vector<Valeur>::iterator end();

    Valeur getMinimum();

    Valeur getMaximum();

    Valeur getValeur(int indice);

private:
    std::vector <Valeur> vect;
};


#endif //CPP_ECHANTILLON_HPP
