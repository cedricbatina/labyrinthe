#include "../entete/PersonnageBase.h"

/* valeurs globales déclarées dans le main.cpp*/
extern int NbColonnes;
extern int NbLignes;
extern char **Matrice;

void PersonnageBase::BougerEnHaut()
{
 if (PosL > 0 && Matrice[PosC][PosL - 1] != '0')
 {
  PosL--;
 }
}
void PersonnageBase::BougerEnBas()
{
 if (PosL < NbLignes - 1 && Matrice[PosC][PosL + 1] != '0')
 {
  PosL++;
 }
}
void PersonnageBase::BougerAGauche()
{
 if (PosC > 0 && Matrice[PosC - 1][PosL] != '0')
 {
  PosC--;
 }
}
void PersonnageBase::BougerADroite()
{
 if (PosC < NbColonnes - 1 && Matrice[PosC + 1][PosL] != '0')
 {
  PosC++;
 }
}
