#include "NewClass4.h"
#include <iostream>


void NewClass4::NC4get()
{
	std::cout << "NC4get \n";
}

void NewClass4::NC4print()
{
	std::cout << "NC4print \n";
}

void NewClass4::create()
{
	std::cout << "create NewClass4 \n";
}
void NewClass4::make()
{
	std::cout << "make NewClass4 \n";
}

void NewClass4::NC4show(bool istrue)
{
	if (istrue == true)
	{
		std::cout << "show NewClass4 \n";
		std::cout << hwnd << "  -hwnd_NewClass4\n";
	}
	else if (istrue == false)
	{
		std::cout << "hide NewClass4 \n";
	}
	
}

