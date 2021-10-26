//
// Created by roxan on 10/19/2021.
//

#ifndef TP3_CHAINE_H
#define TP3_CHAINE_H

#include <vector>
#include <sstream>
#include <iomanip>
#include <stdarg.h>
#include "exception.hpp"
#include "demangle.hpp"

// Variable template
template<typename T>
constexpr bool is_tuple = false;

// Variable template
template<typename ...Ts>
constexpr bool is_tuple<std::tuple<Ts...>> = true;

// Early declaration
template<typename ...Args>
std::string chaine_tuple(const std::tuple<Args...> &t);

// Methode par defaut qui renvoit une exception - TEST n°1
template<typename T>
std::string chaine(T const &array) {
    if constexpr (is_tuple<T>) {
        return chaine_tuple(array);
    } else {
        throw ExceptionChaine(demangle(typeid(T).name()));
    }
}

// Specialisation de la methode pour un std::string - TEST n°2
std::string const &chaine(std::string const &str) {
    return str;
}

// Specialisation de la methode pour un int - TEST n°2
std::string chaine(int val) {
    std::stringstream ss;
    ss << val;
    return ss.str();
}

// Specialisation de la methode pour un int - TEST n°2
std::string chaine(double val) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(6) << val;
    return ss.str();
}

// Specialisation de la methode pour tout type et nombre de parametres - TEST n°3
template<typename ...Args>
std::string chaine(Args const &... args) {
    std::stringstream ss;

    ((ss << chaine(args) << " "), ...);

    return ss.str();
}

// Test n°4
template<typename T, size_t ...Is>
std::string chaine_bis(T const &t, std::index_sequence<Is...>) {
    return chaine(std::get<Is>(t)...);
}

template<typename ...Args>
std::string chaine_tuple(const std::tuple<Args...> &t) {
    return chaine_bis(t, std::make_index_sequence<sizeof...(Args)>());
}

#endif //TP3_CHAINE_H


