//
// Created by roxan on 9/28/2021.
//

#include "cartesien.hpp"

// Constructors
Cartesien::Cartesien() : Cartesien(0, 0) {}

Cartesien::Cartesien(Cartesien &cartesien) : Cartesien(cartesien.getX(), cartesien.getY()) {}

Cartesien::Cartesien(double x, double y) : Point(x, y) {}

Cartesien::Cartesien(Polaire &polaire) {
    polaire.convertir(*this);
}

// Getters
double Cartesien::getX() const {
    return Point::getPremiereCoordonnee();
}

double Cartesien::getY() const {
    return Point::getDeuxiemeCoordonnee();
}

// Setters
void Cartesien::setX(double x) {
    Point::setPremiereCoordonnee(x);
}

void Cartesien::setY(double y) {
    Point::setDeuxiemeCoordonnee(y);
}

// Overrided methods
std::ostream &Cartesien::afficher(std::ostream &flux) const {
    flux << "(x=" << getPremiereCoordonnee() << ";y=" << getDeuxiemeCoordonnee() << ")";

    return flux;
}

void Cartesien::convertir(Polaire &polaire) const {
    polaire.setPremiereCoordonnee((2 * atan(getY() / (getX() + sqrt(pow(getX(), 2) + pow(getY(), 2))))) * 180 / M_PI);
    polaire.setDeuxiemeCoordonnee(sqrt(pow(getX(), 2) + pow(getY(), 2)));
}

void Cartesien::convertir(Cartesien &cartesien) const {
    cartesien.setPremiereCoordonnee(getX());
    cartesien.setDeuxiemeCoordonnee(getY());
}