#pragma once
#include "Reptile.h"
class Snake : public Reptile
{
public:
	void slither()
	{
		cout << name << " is slithering." << endl;
	}

};

