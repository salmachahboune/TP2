#pragma once
#include "Employe.h"
#include"Entrprise.h"
class Gestionnaire :virtual public Employe
{
private:
	double salaire_heb;
public:
	Gestionnaire(double salaire_heb,std::string nom,double NH);
	void Salaire() override;
};

