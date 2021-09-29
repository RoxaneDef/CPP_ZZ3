//
// Created by roxan on 9/29/2021.
//

#ifndef TP1_NUAGE_H
#define TP1_NUAGE_H

#include "point.hpp"
#include <iostream>
#include <vector>

class Nuage {
public:
    // Constructors
    Nuage();

    // Getters
    int size();

    // Setters

    // Others
    void ajouter(Point &point);

private:
    std::vector<Point *> nuage;
};

// Operators

#endif //TP1_NUAGE_H
