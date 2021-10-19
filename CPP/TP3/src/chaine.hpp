//
// Created by roxan on 10/19/2021.
//

#ifndef TP3_CHAINE_H
#define TP3_CHAINE_H

#include <vector>
#include "exception.hpp"
#include "demangle.hpp"

template<typename T>
std::string chaine(T &array) {
    throw ExceptionChaine(demangle(typeid(T).name()));
}


#endif //TP3_CHAINE_H


