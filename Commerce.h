#pragma once
#include "Employe.h"
#include "Entrprise.h"
class Commerce :virtual public Employe
{
private:
	static double  Taux_com;
	double NV;
public:
	Commerce(double NV, std::string nom, double NH);
	void Salaire() override;

};

