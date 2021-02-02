#include "NewClass3.h"
#include "NewClass4.h"
#include <iostream>


void NewClass3::NC3get()
{
	std::cout << "NC3get \n";
}

void NewClass3::NC3print()
{
	std::cout << "NC3print \n";
}


void NewClass3::create(NewClass4& object_class4NC3)
{
	wsk_newclass4 = &object_class4NC3;
}

void NewClass3::NC3show(bool istrue)
{
	if (istrue == true)
	{
		std::cout << "show NewClass3 \n";
		std::cout << hwnd << "  -hwnd_NewClass3\n";
	}
	else if (istrue == false)
	{
		std::cout << "hide NewClass3 \n";
	}
}

void NewClass3::NC3showNC4(NewClass4& object_class4NC3, bool istrue)
{
	if (istrue == true)
	{
		std::cout << "show NewClass4 from NewClass3 \n";
		std::cout << object_class4NC3.hwnd << "  -hwnd_NewClass3 from NewClass3\n";
	}
	else if (istrue == false)
	{
		std::cout << "hide NewClass3 \n";
	}
	
}

void NewClass3::NC3_change_NC4_hwnd(NewClass4& object_class4NC3, std::string newhwnd)
{
	object_class4NC3.hwnd= newhwnd;
}

void NewClass3::NC3showNC4wsk(bool istrue)
{
	if (istrue == true)
	{
		std::cout << "show NewClass4 from NewClass3 \n";
		std::cout << wsk_newclass4->hwnd << "  -hwnd_NewClass3 from NewClass3\n";
	}
	else if (istrue == false)
	{
		std::cout << "hide NewClass3 \n";
	}

}