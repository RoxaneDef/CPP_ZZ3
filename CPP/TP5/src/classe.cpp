//
// Created by roxan on 11/9/2021.
//

#include "classe.hpp"

Classe::Classe() : Classe(0.0, 0.0) {}

Classe::Classe(double borneInf_, double borneSup_) : borneInf(borneInf_), borneSup(borneSup_), quantite(0) {}

double Classe::getBorneInf() { return borneInf; }

double Classe::getBorneSup() { return borneSup; }

int Classe::getQuantite() { return quantite; }

void Classe::setBorneInf(double borneInf_) { borneInf = borneInf_; }

void Classe::setBorneSup(double borneSup_) { borneSup = borneSup_; }

void Classe::setQuantite(int quantite_) { quantite = quantite_; }

void Classe::ajouter() { quantite++; }