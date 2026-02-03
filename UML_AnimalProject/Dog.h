#pragma once
#include "Mammal.h"
class Dog : public Mammal
{
public:
	void bark()
	{
		cout << "Bark Bark Bark" << endl;
	}

	void printInfo()
	{
		cout << "this is the dog info" << endl;
	}
};

