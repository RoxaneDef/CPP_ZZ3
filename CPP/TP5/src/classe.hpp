//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_CLASSE_HPP
#define CPP_CLASSE_HPP

#include "valeur.hpp"

class Classe {
public:
    Classe();

    Classe(double borneInf_, double borneSup_);

    double getBorneInf() const;

    double getBorneSup() const;

    int getQuantite() const;

    void setBorneInf(double borneInf_);

    void setBorneSup(double borneSup_);

    void setQuantite(int quantite_);

    void ajouter();

    friend bool operator<(const Classe &cla1, const Classe &cal2);

    friend bool operator>(const Classe &cla1, const Classe &cal2);

private:
    double borneInf;
    double borneSup;
    int quantite;
};


#endif //CPP_CLASSE_HPP
