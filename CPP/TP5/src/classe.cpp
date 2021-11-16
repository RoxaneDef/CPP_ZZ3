//
// Created by roxan on 11/9/2021.
//

#include "classe.hpp"

Classe::Classe() : Classe(0.0, 0.0) {}

Classe::Classe(double borneInf_, double borneSup_) : borneInf(borneInf_), borneSup(borneSup_), quantite(0) {}

double Classe::getBorneInf() const { return borneInf; }

double Classe::getBorneSup() const { return borneSup; }

int Classe::getQuantite() const { return quantite; }

void Classe::setBorneInf(double borneInf_) { borneInf = borneInf_; }

void Classe::setBorneSup(double borneSup_) { borneSup = borneSup_; }

void Classe::setQuantite(int quantite_) { quantite = quantite_; }

void Classe::ajouter() { quantite++; }

// Fonction de comparaison de deux valeurs
bool operator<(const Classe &cla1, const Classe &cla2) { return cla1.getBorneInf() < cla2.getBorneInf(); }

bool operator>(const Classe &cla1, const Classe &cla2) { return cla1.getBorneSup() > cla2.getBorneSup(); }