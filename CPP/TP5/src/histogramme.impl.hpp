#ifndef TP5_HISTOGRAMME_IMPL_HPP
#define TP5_HISTOGRAMME_IMPL_HPP

template<typename T>
Histogramme<T>::Histogramme() : Histogramme(0.0, 1.0, 0.1) {}

template<typename T>
Histogramme<T>::Histogramme(double borneInf, double borneSup, int nbrClasse) {
    double intervalle = (borneSup - borneInf) / nbrClasse;

    for (double i = 0; i < nbrClasse; i++) {
        ajouter(Classe(borneInf + i * intervalle, borneInf + (i + 1) * intervalle));
    }
}

template<typename T>
std::set <Classe, T> Histogramme<T>::getClasses() { return s; }

template<typename T>
void Histogramme<T>::ajouter(double double_) {
    typename std::set<Classe, T>::iterator it = getIteratorToCorrectClasse(Valeur(double_));
    Classe newClasse = (*it);
    s.erase(it);
    newClasse.ajouter();
    ajouter(newClasse);
}

template<typename T>
void Histogramme<T>::ajouter(Classe classe_) { s.insert(classe_); }

template<typename T>
void Histogramme<T>::ajouter(Echantillon echantillon_) {
    for (int i = 0; i < echantillon_.getTaille(); i++) {
        typename std::set<Classe, T>::iterator it = getIteratorToCorrectClasse(echantillon_.getValeur(i));
        Classe newClasse = (*it);
        s.erase(it);
        newClasse.ajouter();
        ajouter(newClasse);
    }
}

template<typename T>
typename std::set<Classe, T>::iterator Histogramme<T>::getIteratorToCorrectClasse(Valeur val) {
    typename std::set<Classe, T>::iterator it_;

    for (typename std::set<Classe, T>::iterator it = s.begin(); it != s.end(); ++it) {
        if ((*it).getBorneInf() <= val.getNombre() && (*it).getBorneSup() > val.getNombre()) {
            it_ = it;
        }
    }

    return it_;
}

#endif
