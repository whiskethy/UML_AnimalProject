#pragma once

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string name;
	int age;



	// print info()
	void printInfo()
	{
		cout << "You created " << name << endl;
	}

};

