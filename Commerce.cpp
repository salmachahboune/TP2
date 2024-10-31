#include "Commerce.h"

#include <iostream>
double Commerce::Taux_com = 100;

Commerce::Commerce(double NV, std::string nom, double NH) :NV(NV), Employe(nom, NH)
{}

void Commerce::Salaire()
{
    salaire = NH * Taux_horaire + Taux_com * NV;
   
}


