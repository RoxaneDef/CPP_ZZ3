//
// Created by roxan on 9/28/2021.
//

#ifndef TP1_CARTESIEN_H
#define TP1_CARTESIEN_H

#include "point.hpp"
#include "polaire.hpp"
#include "nuage.hpp"
#include <math.h>

class Cartesien : public Point {
public:
    // Constructors
    Cartesien();

    Cartesien(Cartesien &cartesien);

    Cartesien(double x, double y);

    Cartesien(Polaire &polaire);

    // Getters
    double getX() const;

    double getY() const;

    // Setters
    void setX(double x);

    void setY(double y);

    // Overrided methods
    std::ostream &afficher(std::ostream &flux) const override;

    void convertir(Polaire &polaire) const override;

    void convertir(Cartesien &cartesien) const override;
};


#endif //TP1_CARTESIEN_H
