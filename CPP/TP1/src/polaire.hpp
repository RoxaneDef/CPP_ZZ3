//
// Created by roxan on 9/28/2021.
//

#ifndef TP1_POLAIRE_H
#define TP1_POLAIRE_H

#include "point.hpp"
#include "cartesien.hpp"
#include <math.h>

class Polaire : public Point {
public:
    // Constructors
    Polaire();

    Polaire(double distance, double angle);

    Polaire(Cartesien &cartesien);

    // Getters
    double getAngle() const;

    double getDistance() const;

    // Setters
    void setAngle(double angle);

    void setDistance(double distance);

    // Overrided methods
    std::ostream &afficher(std::ostream &flux) const override;

    void convertir(Polaire &polaire) const override;

    void convertir(Cartesien &cartesien) const override;
};


#endif //TP1_POLAIRE_H
