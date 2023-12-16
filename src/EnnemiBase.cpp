#include "../entete/EnnemiBase.h"

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
