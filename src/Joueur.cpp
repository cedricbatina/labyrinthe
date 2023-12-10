#include "../entete/Joueur.h"

void Joueur::Dessiner(/* args */)
{
 glPushMatrix();
 glTranslated(PosC + 0.5, PosL + 0.5, 0.0);
 glColor3d(1.0, 1.0, 0.0);     // couleur noire
 glutSolidSphere(0.3, 12, 12); // sphère de la tête

 glColor3d(1.0, 1.0, 0.0); // couleur jaune
 glTranslated(0.1, 1.0, 0.0);
 glutSolidSphere(0.05, 12, 12); // deuxieme oeil
 glPopMatrix();
}
Joueur::Joueur()
{
 /*code goes below*/
}
Joueur::~Joueur()
{
 /* code goes here*/
}