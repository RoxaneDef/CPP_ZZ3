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

// Setters

// Others
void Nuage::ajouter(Point &point) {
    nuage.push_back(&point);
}

