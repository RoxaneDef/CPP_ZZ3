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
template<typename T>
T barycentre_v1(Nuage <T> &nuage) {
    double x_barycentre = 0, y_barycentre = 0;
    T t;
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

#endif