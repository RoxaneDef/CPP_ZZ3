//
// Created by roxan on 9/29/2021.
//

#include "nuage.hpp"

// Constructors
Nuage::Nuage() {}

// Getters
int Nuage::size() {
    return nuage.size();
}

std::vector<Point *>::iterator Nuage::begin() {
    return nuage.begin();
}

std::vector<Point *>::iterator Nuage::end() {
    return nuage.end();
}

// Setters

// Others
void Nuage::ajouter(Point &point) {
    nuage.push_back(&point);
}

