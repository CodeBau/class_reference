#pragma once
#include<string>

class NewBaseClass {

public:
	int NBCint = 99;
	std::string NBCstring = "NBCString";

	virtual void make();
	void NBCget();
	void NBCprint();

};