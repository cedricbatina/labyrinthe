#include "../entete/Joueur.h"

/*extern int NbColonnes;
extern int NbLignes;
extern char **Matrice;*/

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
/*
void Joueur::BougerEnHaut()
{

  if ((PosL > 0) && (Matrice[PosC][PosL - 1] != '0'))
    PosL--;
}
void Joueur::BougerEnBas()
{

  if (PosL < NbLignes - 1 && Matrice[PosC][PosL + 1] != '0')
    PosL++;
}
void Joueur::BougerAGauche()
{

  if (PosC > 0 && Matrice[PosC - 1][PosL] != '0')
    PosC--;
}
void Joueur::BougerADroite()
{
  if (PosC < NbColonnes - 1 && Matrice[PosC][PosL] != '0')
    PosC++;
}
*/
