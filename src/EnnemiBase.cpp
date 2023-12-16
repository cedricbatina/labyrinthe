#include "../entete/EnnemiBase.h"
#include "../entete/Joueur.h"
extern void LibereMemoire();
extern void LabyAffichage();

extern Joueur monJoueur;

void EnnemiBase ::DeplacementAuto()
{
 int hasard = rand() % 4;
 switch (hasard)
 {
 case 0:
 {
  BougerEnHaut();
  break;
 }
 case 1:
 {
  BougerEnBas();
  break;
 }
 case 2:
 {
  BougerADroite();
  break;
 }
 case 3:
 {
  BougerAGauche();
  break;
 }
 }
}
void EnnemiBase ::TestCollision()
{
 // test si le joueur et l'ennemi sont au même endroit

 if (PosC == monJoueur.getPosC() && PosL == monJoueur.getPosL())
 {
  cout << "Vous avez perdu ! \a" << endl;
  LabyAffichage(); // rafraîssement de la scène
  LibereMemoire(); // libere la mémoire allouée
  system("pause");
  exit(0);
 }
}