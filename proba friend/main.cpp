#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "NewBaseClass.h"
#include "NewClass3.h"
#include "NewClass4.h"

int main()
{
	Class1 object_class1;
	Class2 object_class2;
	object_class1.Show_Intclass1();
	object_class1.Show_Intclass2(object_class2);
	object_class2.Show_Intclass1(object_class1);
	object_class2.Show_Intclass2();

	NewBaseClass object_NewBaseClass;
	object_NewBaseClass.NBCget();
	object_NewBaseClass.NBCprint();

	NewClass3 object_NewClass3;
	NewClass4 object_NewClass4;
	object_NewClass3.create(object_NewClass4);
	object_NewClass3.NC3showNC4wsk(true);

	
	/*
	object_NewClass4.NC4show(true);
	object_NewClass3.NC3showNC4(object_NewClass4,true);
	object_NewClass4.hwnd = "nowe_hwnd_NC4";
	object_NewClass4.NC4show(true);
	object_NewClass3.NC3showNC4(object_NewClass4, true);
	object_NewClass3.NC3_change_NC4_hwnd(object_NewClass4, "dupa");
	object_NewClass4.NC4show(true);
	object_NewClass3.NC3showNC4(object_NewClass4, true);
	*/

	/*NewClass4* wsk_object_NewClass4;
	wsk_object_NewClass4 = &object_NewClass4;
	wsk_object_NewClass4->NC4show(true);

	std::cout <<"\n";

	object_NewClass3.create();
	object_NewClass4.create();
	std::cout << "\n";

	object_NewClass3.NC3show(true);
	object_NewClass4.NC4show(false);

	object_NewClass3.hwnd="nowe_hwnd_NC3";
	object_NewClass3.NC3show(true);

	object_NewClass4.hwnd = "nowe_hwnd_NC4";
	object_NewClass4.NC4show(true);
	*/

	return 0;
}