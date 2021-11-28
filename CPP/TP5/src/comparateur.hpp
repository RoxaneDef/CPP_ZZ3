#ifndef CPP_COMPARATEUR_HPP
#define CPP_COMPARATEUR_HPP

#include "classe.hpp"

// Foncteur de comparaison de classes en fonction de leur quantite
template<typename T>
struct ComparateurQuantite {
    bool operator()(const Classe &cla1, const Classe &cla2) const {
        bool result;

        if (cla1.getQuantite() == cla2.getQuantite()) {
            result = cla1.getBorneInf() < cla2.getBorneInf();
        } else {
            result = cla1.getQuantite() >= cla2.getQuantite();
        }

        return result;
    }
};

#endif