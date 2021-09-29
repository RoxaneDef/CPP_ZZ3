//
// Created by roxan on 9/28/2021.
//

#ifndef TP1_POINT_H
#define TP1_POINT_H


class Point {
public:
    Point(double premiereCoordonnee, double deuxiemeCoordonnee);

    //virtual void afficher();

    double getPremiereCoordonnee();

    double getDeuxiemeCoordonnee();

private:
    double premiereCoordonnee;
    double deuxiemeCoordonnee;
};


#endif //TP1_POINT_H
