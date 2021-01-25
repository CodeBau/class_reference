#include "Class1.h"
#include "Class2.h"
#include <iostream>

void Class2::Show_Intclass2()
{
	std::cout << Intclass2 << "\n";
}
void Class2::Show_Intclass1(Class1& object_class1)
{
	std::cout << object_class1.Intclass1 << "\n";
}