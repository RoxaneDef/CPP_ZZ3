//
// Created by roxan on 9/28/2021.
//

#ifndef TP1_POLAIRE_H
#define TP1_POLAIRE_H

#include "point.hpp"

class Polaire : public Point {
public:
    Polaire(double distance, double angle);

private:
    double getAngle();

    double getDistance();
};


#endif //TP1_POLAIRE_H
