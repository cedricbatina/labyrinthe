#include <iostream>
#include "../GL/freeglut.h"

class Joueur
{

private:
 /* data */
 // position Colonne/Ligne sur la matrice
 extern int PosC;
 extern int PosL;

public:
 Joueur(/* args */);
 ~Joueur();
 // accesseurs
 int getPosC() const
 {
  {
   return PosC;
  }
 }
 int getPosL() const
 {
  {
   return PosL;
  }
 }
 // les mutateurs
 void setPosC(int C)
 {
  PosC = C;
 }
 void setPosL(int L)
 {
  PosL = L;
 }
 void Dessiner();
 void BougerEnHaut();
 void BougerEnBas();
 void BougerAGauche();
 void BougerADroite();

 // on initialise
 /*void Initialisation () {
  PosC = PosL = 0;
 }*/
 /*Joueur()
 {
  PosC = PosL + 0;
 }*/
};
