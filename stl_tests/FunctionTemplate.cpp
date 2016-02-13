#include "stdafx.h"
#include "genericHeader.h"

template <class MyClass>
MyClass addValues(MyClass var1, MyClass var2)
{
	return var1 + var2;
}

void testFunctionTemplate()
{
	cout << "\n//testFunctionTemplate" << endl;
	int a = 1;
	int b = 2;
	cout << "addValues" << addValues(a, b) << endl;
}