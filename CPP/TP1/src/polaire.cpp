//
// Created by roxan on 9/28/2021.
//

#include "polaire.hpp"

// Constructors
Polaire::Polaire() : Polaire(0, 0) {}

Polaire::Polaire(double distance, double angle) : Point(distance, angle) {}

Polaire::Polaire(Cartesien &cartesien) : Polaire() {
    cartesien.convertir(*this);
}

// Getters
double Polaire::getAngle() const {
    return Point::getPremiereCoordonnee();
}

double Polaire::getDistance() const {
    return Point::getDeuxiemeCoordonnee();
}

// Setters
void Polaire::setAngle(double angle) {
    Point::setPremiereCoordonnee(angle);
}

void Polaire::setDistance(double distance) {
    Point::setDeuxiemeCoordonnee(distance);
}

// Overrided methods
std::ostream &Polaire::afficher(std::ostream &flux) const {
    flux << "(a=" << getPremiereCoordonnee() << ";d=" << getDeuxiemeCoordonnee() << ")";

    return flux;
}

void Polaire::convertir(Polaire &polaire) const {
    polaire.setPremiereCoordonnee(getAngle());
    polaire.setDeuxiemeCoordonnee(getDistance());
}

void Polaire::convertir(Cartesien &cartesien) const {
    cartesien.setPremiereCoordonnee(getDistance() * cos(getAngle() / 180 * M_PI));
    cartesien.setDeuxiemeCoordonnee(getDistance() * sin(getAngle() / 180 * M_PI));
}