#pragma once
#include<string>
#include "NewBaseClass.h"

class NewBaseClass;
class NewClass4;

class NewClass3: public NewBaseClass
{
public:
	int NC3int = 3;
	std::string NC3 = "NC3String";
	std::string hwnd = "hwnd_NC3";
	NewClass4* wsk_newclass4;

	void create(NewClass4& object_class4NC3);
	void NC3get();
	void NC3print();

	void NC3show(bool istrue);

	void NC3showNC4(NewClass4& object_class4NC3, bool istrue);

	void NC3_change_NC4_hwnd(NewClass4& object_class4NC3, std::string newhwnd);

	void NC3showNC4wsk(bool istrue);

};
