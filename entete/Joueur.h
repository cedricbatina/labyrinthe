#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include "../GL/freeglut.h"
#include "PersonnageBase.h"

class Joueur : public PersonnageBase
{

public:
    Joueur() : PersonnageBase()
    {
    }
    // accesseurs

    void Dessiner();
};
#endif

/*void Joueur::Dessiner()
{
    glPushMatrix();
    glTranslated(PosC + 0.5, PosL + 0.5, 0.0);
    // la tête
    glColor3d(0.0, 0.0, 0.0);     // couleur noire
    glutSolidSphere(0.3, 12, 12); // sphère de tête

    // les yeux
    glColor3d(1.0, 1.0, 0.0); // couleur jaune
    glTranslated(0.1, -0.1, 0.0);
    glutSolidSphere(0.5, 12, 12); // premier oeil
    glTranslated(-0.2, 0.0, 0.0);
    glutSolidSphere(0.5, 12, 12); // 2eme oeil
    glPopMatrix();
}
*/