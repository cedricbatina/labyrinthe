#include "GL/freeglut.h"

class Joueur
{
private:
 /* data */
 // position Colonne/Ligne sur la matrice
 int PosC, PosL;

public:
 // accesseurs
 int getPosC()
 {
  const { return PosC; }
 }
 int getPosL()
 {
  const { return PosL; }
 }

 // on initialise
 /*void Initialisation () {
  PosC = PosL = 0;
 }*/
 // Constructeur
 Jouer()
 {
  Posc = PosL + 0;
 }
};
cout << "Coordonnées du joueur (" << monJoueur.getPosC() << ", " << monJoueur.getPosL() << ") " << endl;
