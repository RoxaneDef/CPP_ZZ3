//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_ECHANTILLON_HPP
#define CPP_ECHANTILLON_HPP

#include "vector"
#include "valeur.hpp"
#include <algorithm>

class Echantillon {
public:
    int getTaille() const;

    void ajouter(Valeur val_);

    typename std::vector<Valeur>::iterator begin();

    typename std::vector<Valeur>::iterator end();

    Valeur getMinimum();

    Valeur getMaximum();

private:
    std::vector <Valeur> vect;
};


#endif //CPP_ECHANTILLON_HPP
