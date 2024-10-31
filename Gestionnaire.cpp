#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(double salaire_heb,std::string nom,double NH):salaire_heb(salaire_heb),Employe(nom,NH)
{
}

void Gestionnaire::Salaire()
{
    salaire= NH*Taux_horaire+ salaire_heb*4;
    
}
