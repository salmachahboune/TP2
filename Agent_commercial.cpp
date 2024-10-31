#include "Agent_commercial.h"
#include <iostream>


Agent_commercial::Agent_commercial( std::string nom, double NH, double salaire_heb,double NV)
    : Employe(nom, NH),         
      Commerce(NV, nom, NH),    
      Gestionnaire(salaire_heb, nom, NH) 
                     
{}

void Agent_commercial::Salaire()
{
    salaire=NH*Taux_horaire;
   
}


