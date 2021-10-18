#ifndef TP2_NUAGE_IMPL_HPP
#define TP2_NUAGE_IMPL_HPP

// Methodes pour Nuage générique
template<typename T>
typename std::vector<T>::iterator Nuage<T>::begin() {
    return nuage.begin();
}

template<typename T>
typename std::vector<T>::iterator Nuage<T>::end() {
    return nuage.end();
}

template<typename T>
int Nuage<T>::size() const {
    return nuage.size();
}

template<typename T>
void Nuage<T>::ajouter(const T &t) {
    nuage.push_back(t);
}

// Autres méthodes
// barycentre_v1 pour le TEST : 4A
/*
template<typename T>
T barycentre_v1(Nuage <T> &nuage) {
    Cartesien cart;
    T t;

    double x_barycentre = 0, y_barycentre = 0;
    typename Nuage<T>::const_iterator it = nuage.begin();

    while (it != nuage.end()) {
        (it++)->convertir(cart);

        x_barycentre += cart.getPremiereCoordonnee();
        y_barycentre += cart.getDeuxiemeCoordonnee();
    }

    if (nuage.size() != 0) {
        x_barycentre /= nuage.size();
        y_barycentre /= nuage.size();
    }

    Cartesien cart_res(x_barycentre, y_barycentre);
    cart_res.convertir(t);

    return t;
}
 */

// barycentre_v1 pour le TEST : 4B
template<typename T>
T barycentre_v1(Nuage <T> &nuage) {
    T t;
    double x_barycentre = 0, y_barycentre = 0;
    typename Nuage<T>::const_iterator it = nuage.begin();

    while (it != nuage.end()) {
        (it++)->convertir(t);

        x_barycentre += t.getPremiereCoordonnee();
        y_barycentre += t.getDeuxiemeCoordonnee();
    }

    if (nuage.size() != 0) {
        x_barycentre /= nuage.size();
        y_barycentre /= nuage.size();
    }

    return T(x_barycentre, y_barycentre);
}


template<template<typename, typename...> class S, class T, typename... Allocator>
T barycentre_v2(S<T, Allocator...> &nuage) {
    Cartesien c;
    T t;
    double x_barycentre = 0, y_barycentre = 0;
    typename S<T, Allocator...>::const_iterator it = nuage.begin();

    while (it != nuage.end()) {
        (it++)->convertir(c);

        x_barycentre += c.getPremiereCoordonnee();
        y_barycentre += c.getDeuxiemeCoordonnee();
    }

    if (nuage.size() != 0) {
        x_barycentre /= nuage.size();
        y_barycentre /= nuage.size();
    }

    Cartesien c2(x_barycentre, y_barycentre);
    c2.convertir(t);

    return t;
}

#endif