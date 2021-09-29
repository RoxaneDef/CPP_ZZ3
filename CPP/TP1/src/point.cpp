//
// Created by roxan on 9/28/2021.
//

#include "point.hpp"

Point::Point(double premiereCoordonnee, double deuxiemeCoordonnee) : premiereCoordonnee(premiereCoordonnee), deuxiemeCoordonnee(deuxiemeCoordonnee) {}

double Point::getPremiereCoordonnee() {
    return premiereCoordonnee;
}

double Point::getDeuxiemeCoordonnee() {
    return deuxiemeCoordonnee;
}