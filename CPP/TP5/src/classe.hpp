//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_CLASSE_HPP
#define CPP_CLASSE_HPP


class Classe {
public:
    Classe();

    Classe(double borneInf_, double borneSup_);
    
    double getBorneInf();

    double getBorneSup();

    int getQuantite();

private:
    double borneInf;
    double borneSup;
    int quantite;
};


#endif //CPP_CLASSE_HPP
