#pragma once
#include"Employe.h"
class Entrprise
{	
private:
	Employe** Emp;
	int capacity;
	int nbEmp;
public:
	Entrprise();
	void total_salaire();
	void lister_emp();
	void Add_Emp(Employe* emp);
	void resize();
	~Entrprise();
};

