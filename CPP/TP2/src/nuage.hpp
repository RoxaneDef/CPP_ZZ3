//
// Created by roxan on 9/28/2021.
//

#ifndef TP2_NUAGE_H
#define TP2_NUAGE_H

#include <vector>
#include <iostream>

template<typename T>
class Nuage {
public:
    // Iterators
    typedef typename std::vector<T>::const_iterator const_iterator;

    typename std::vector<T>::iterator begin();

    typename std::vector<T>::iterator end();

    // Getters
    int size() const;

    // Others
    void ajouter(const T &t);

private:
    std::vector <T> nuage;
};

#include "nuage.impl.hpp"

#endif //TP2_NUAGE_H
