#include "../entete/EnnemiRouge.h"

void EnnemiRouge::Dessiner()
{
 glPushMatrix();
 glTranslated(PosC + 0.5, PosL + 0.5, 0.0);
 // la tête
 glColor3d(0.9, 0.0, 0.0); // couleur rouge
 glPushMatrix();
 glScaled(0.7, 1.0, 1.0);
 glutSolidSphere(0.35, 12, 12); // premier ovale
 glPopMatrix();
 glPushMatrix();
 glScaled(1.0, 0.7, 1.0);
 glutSolidSphere(0.35, 12, 12); // deuxième ovale
 glPopMatrix();

 // les yeux
 glColor3d(0.0, 0.0, 0.0); // couleur noire
 glTranslated(0.13, -0.05, 0.0);
 glutSolidSphere(0.07, 12, 12); // premier oeil
 glTranslated(-0.26, 0.0, 0.0);
 glutSolidSphere(0.07, 12, 12); // deuxième oeil
 glPopMatrix();
}