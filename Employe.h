#pragma once
#include <iostream>
#include "Salarie.h"

class Entrprise;

class Employe:public Salarie
{	
protected:
	static double Taux_horaire;
	double NH;
	double salaire;
	static double count[100];
private:
	std::string Nom;
	Entrprise* Entreprise;
	
	
public:

	Employe(std::string nom,double NH);
	void Salaire() override;
	void afficher_Emp();
	double operator+(Employe* E);
	
};

