#pragma once
#include "Commerce.h"
#include "Gestionnaire.h"
class Agent_commercial : public  Commerce, public Gestionnaire
{

public:
	Agent_commercial( std::string nom, double NH, double salaire_heb,double NV);
	void Salaire() override;

};

