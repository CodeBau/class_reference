#pragma once
#include<string>
#include "NewBaseClass.h"

class NewBaseClass;

class NewClass4 : public NewBaseClass
{
public:
	int NC4int = 4;
	std::string NC4 = "NC4String";
	std::string hwnd = "hwnd_NC4";


	void create();
	virtual void make() override;
	void NC4get();
	void NC4print();

	void NC4show(bool istrue);

};