#include "Class1.h"
#include "Class2.h"
#include <iostream>

void Class1::Show_Intclass1()
{
	std::cout << Intclass1 << "\n";
}
void Class1::Show_Intclass2(Class2& object_class2)
{
	std::cout << object_class2.Intclass2 << "\n";
}