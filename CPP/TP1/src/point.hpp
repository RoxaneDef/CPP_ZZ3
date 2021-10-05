//
// Created by roxan on 9/28/2021.
//

#ifndef TP1_POINT_H
#define TP1_POINT_H

#include <iostream>

class Polaire;

class Cartesien;

class Point {
public:
    // Constructors
    Point();

    Point(double premiereCoordonnee, double deuxiemeCoordonnee);

    // Getters
    double getPremiereCoordonnee() const;

    double getDeuxiemeCoordonnee() const;

    // Setters
    void setPremiereCoordonnee(double premiereCoordonnee);

    void setDeuxiemeCoordonnee(double deuxiemeCoordonnee);

    // Virtual methods
    virtual std::ostream &afficher(std::ostream &flux) const = 0;

    virtual void convertir(Polaire &polaire) const = 0;

    virtual void convertir(Cartesien &cartesien) const = 0;

private:
    double premiereCoordonnee;
    double deuxiemeCoordonnee;
};

// Operators
std::ostream &operator<<(std::ostream &flux, const Point &point);

#endif //TP1_POINT_H
