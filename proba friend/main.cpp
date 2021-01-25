#include <iostream>
#include "Class1.h"
#include "Class2.h"

int main()
{
	Class1 object_class1;
	Class2 object_class2;

	object_class1.Show_Intclass1();
	object_class1.Show_Intclass2(object_class2);
	object_class2.Show_Intclass1(object_class1);
	object_class2.Show_Intclass2();

	return 0;
}