
#include <iostream>
#include"Employe.h"
#include"Commerce.h"
#include"Gestionnaire.h"
#include"Entrprise.h"
#include "Agent_commercial.h"

int main()
{
	Entrprise* En = new Entrprise();
	//Entrprise* En2 = new Entrprise();
	Employe* E=new Employe("salma",55);
	Employe* E1 = new Employe("houda", 40);
	Employe* E2 = new Employe("mouna", 30);
	Employe* E3 = new Employe("cccc", 34);
	//Commerce* C = new Commerce(30, "mouna", 59, En);
	//Gestionnaire* G= new Gestionnaire(100, "houda", 66, En2);
	//Agent_commercial* A = new Agent_commercial("noura", 44, 70, 20, En2);
	
	En->Add_Emp(E);
	En->Add_Emp(E1);
	En->Add_Emp(E2);
	En->Add_Emp(E3);
	//En2->Add_Emp(G);
	//En2->Add_Emp(A);
	
	E->Salaire();
	E1->Salaire();
	E2->Salaire();
	E3->Salaire();
	//
	//G->Salaire(En2);
	//A->Salaire(En2);
	
	

	En->lister_emp();
	
	En->total_salaire();
	
	
}


