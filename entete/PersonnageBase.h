#include "../GL/freeglut.h"
#ifndef PERSONNAGE_BASE_H
#define PERSONNAGE_BASE_H

#include <iostream>
using namespace std;

class PersonnageBase
{
protected:
 /* position Colonne/Ligne sur la matrice */
 int PosC, PosL;

public:
 /* accesseurs*/
 int getPosC()
 {
  return PosC;
 };
 int getPosL()
 {
  return PosL;
 }

 /*mutateurs*/
 void SetPosC(int C) { PosC = C; }
 void SetPosL(int L) { PosL = L; }
 /* constructeur*/
 PersonnageBase()
 {
  PosC = PosL = 0;
 }
 // fonction de dessin virtuelle pure
 virtual void Dessiner() = 0;
 /* fonctions de déplacement*/
 void BougerEnHaut();
 void BougerEnBas();
 void BougerAGauche();
 void BougerADroite();
};
#endif
