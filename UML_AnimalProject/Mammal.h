#pragma once
#include "Animal.h"
class Mammal : public Animal
{
public:

	string hairColor;

	// walk()
	void walk()
	{
		cout << name << " is walking." << endl;
	}

};

