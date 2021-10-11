//
// Created by roxan on 9/28/2021.
//

#include "point.hpp"

// Constructors
Point::Point() : Point(0, 0) {}

Point::Point(double premiereCoordonnee, double deuxiemeCoordonnee) : premiereCoordonnee(premiereCoordonnee), deuxiemeCoordonnee(deuxiemeCoordonnee) {}

// Getters
double Point::getPremiereCoordonnee() const {
    return premiereCoordonnee;
}

double Point::getDeuxiemeCoordonnee() const {
    return deuxiemeCoordonnee;
}

// Setters
void Point::setPremiereCoordonnee(double premiereCoordonnee) {
    this->premiereCoordonnee = premiereCoordonnee;
}

void Point::setDeuxiemeCoordonnee(double deuxiemeCoordonnee) {
    this->deuxiemeCoordonnee = deuxiemeCoordonnee;
}

// Operators
std::ostream &operator<<(std::ostream &flux, const Point &point) {
    point.afficher(flux);
    return flux;
}