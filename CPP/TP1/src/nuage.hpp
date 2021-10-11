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

    // Iterators
    typedef std::vector<Point *>::const_iterator const_iterator;

    // Getters
    int size();

    std::vector<Point *>::iterator begin();

    std::vector<Point *>::iterator end();

    // Setters

    // Others
    void ajouter(Point &point);

private:
    std::vector<Point *> nuage;
};

// Operators

#endif //TP1_NUAGE_H
