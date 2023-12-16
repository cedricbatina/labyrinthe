#ifndef ENNEMI_BASE_H
#define ENNEMI_BASE_H
#include "PersonnageBase.h"

class EnnemiBase : public PersonnageBase
{
public:
 void DeplacementAuto(); // fonction de déplacement automatique des ennemis
 // constructeur
 EnnemiBase() : PersonnageBase() {}
};
#endif
