// Gardien //---------------------------------------------------------------------------------------
#ifndef _VECTEUR_HPP_
#define _VECTEUR_HPP_

// Entetes //---------------------------------------------------------------------------------------
#include <complexe.hpp>
#include <stdexcept>

// Classe  V e c t e u r //-------------------------------------------------------------------------
class Vecteur {
    //----------------------------------------------------------------------------------------Attributs
private:
    unsigned taille_;
    complexe_t *tableau_;

    //---------------------------------------------------------------------------------------Accesseurs
public:
    unsigned getTaille(void) const { return taille_; }

    complexe_t &operator[](unsigned i) {
        if (i < taille_) return tableau_[i];
        throw std::out_of_range("");
    }

    const complexe_t &operator[](unsigned i) const {
        if (i < taille_) return tableau_[i];
        throw std::out_of_range("");
    }

public:
    //-----------------------------------------------------------------------------Constructeur defaut
    // t construction de complexe_t par ???
    explicit Vecteur(unsigned t = 10) : taille_(t), tableau_(new complexe_t[taille_]) {} // Construit taille_ complete_t par defaut

    //------------------------------------------------------------------------------Constructeur copie
    Vecteur(const Vecteur &v) : taille_(v.taille_), tableau_(new complexe_t[taille_]) {
        for (unsigned i = 0; i < taille_; ++i) tableau_[i] = v[i];
    }

    //-------------------------------------------------------------------------------------Destructeur
    ~Vecteur(void) { if (tableau_) delete[] tableau_; }

    //-------------------------------------------------------------------------------Affectation copie
    Vecteur &operator=(const Vecteur &v) {
        if (this != &v) {
            if (taille_ != v.taille_) throw std::length_error("");
            for (unsigned i = 0; i < v.taille_; ++i) tableau_[i] = v[i];
        }

        return *this;
    }
};

// Surcharge operateurs //--------------------------------------------------------------------------

//----------------------------------------------------------------------------------------operator<<
inline std::ostream &operator<<(std::ostream &flux, const Vecteur &v) {
    for (unsigned i = 0; i < v.getTaille(); ++i) flux << v[i] << " ";
    return flux;
}

//-----------------------------------------------------------------------------------------operator+
inline Vecteur operator+(const Vecteur &v1, const Vecteur &v2) {
    Vecteur v;  // 10 constructions par defaut

    // v1[i] + v2[i] : 1 construction ad hoc
    for (unsigned i = 0; i < v1.getTaille(); ++i) v[i] = v1[i] + v2[i]; // taille_ constructions ad hoc + taille_ affectations par mouvement

    return v;
}

//-----------------------------------------------------------------------------------------operator*
inline Vecteur operator*(const Vecteur &v1, const Vecteur &v2) {
    Vecteur v; // 10 constructions par defaut

    for (unsigned i = 0; i < v1.getTaille(); ++i) v[i] = v1[i] * v2[i];  // taille_ constructions ad hoc + taille_ affectations par mouvement

    return v;
}

// Fin //-------------------------------------------------------------------------------------------
#endif
