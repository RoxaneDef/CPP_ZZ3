//
// Created by roxan on 9/28/2021.
//

#include "polaire.hpp"

Polaire::Polaire(double distance, double angle) : Point(distance, angle) {}

double Polaire::getAngle() {
    return Point::getPremiereCoordonnee();
}

double Polaire::getDistance() {
    return Point::getDeuxiemeCoordonnee();
}