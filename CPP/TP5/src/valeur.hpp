//
// Created by roxan on 11/9/2021.
//

#ifndef CPP_VALEUR_HPP
#define CPP_VALEUR_HPP


class Valeur {
public:
    Valeur();

    Valeur(double val_);

    double getNombre() const;

    void setNombre(double val_);

    friend bool operator<(const Valeur &val1, const Valeur &val2);

private:
    double val;
};


#endif //CPP_VALEUR_HPP
