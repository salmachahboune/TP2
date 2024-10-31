#include "Employe.h"
#include"Entrprise.h"
double Employe::Taux_horaire = 100;
double Employe::count[100] = {};

Employe::Employe(std::string nom,double NH):Nom(nom),NH(NH),salaire(0)
{}

void Employe::Salaire()
{
    salaire=Taux_horaire * NH;
    
   
}

void Employe::afficher_Emp()
{
    std::cout << Nom <<" "<< salaire << std::endl;
}

double Employe::operator+(Employe* E)
{
    if (E == nullptr) { return salaire; }
    return salaire + E->salaire;
    
}



