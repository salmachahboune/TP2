#include "Entrprise.h"



Entrprise::Entrprise():capacity(4),nbEmp(0)
{
	Emp = new Employe * [capacity];
	for (int i = 0; i < capacity; i++)
	{
		Emp[i] = nullptr;
	}
}

void Entrprise::total_salaire()
{   
	
	double Total = 0;
	for(int i=0;i<nbEmp;i=i+2)
	{ 
	 if(i==nbEmp-1)
	 {
		Employe em=Employe("",0);
		Total+= Emp[i]->operator+(Emp[i + 1]);
		break;
	 }
	 Total+=Emp[i]->operator+(Emp[i+1]);
	 
	}
	

	std::cout <<"Total salaire employe pour lentreprise " << Total << std::endl;
}

void Entrprise::lister_emp()
{
for(int i=0;i<nbEmp;i++)
 { 
	 
	std::cout << "Employe: ";
	Emp[i]->afficher_Emp();

 }
}

void Entrprise::Add_Emp(Employe* emp)
{
	Emp[nbEmp++] = emp;
}

void Entrprise::resize()
{
	capacity = capacity * 2;
	Employe** tab = new Employe * [capacity];
	for (int i = 0; i < nbEmp; i++)
	{
		tab[i] = Emp[i];
	}
	for (int i = nbEmp; i < capacity; i++)
	{
		tab[i] =nullptr;
	}
	delete[] Emp;
	Emp = tab;
}

Entrprise::~Entrprise()
{
	delete [] Emp;
}






