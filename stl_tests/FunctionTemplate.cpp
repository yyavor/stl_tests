#include "stdafx.h"
#include "genericHeader.h"

template <class MyClass>
MyClass addValues(MyClass var1, MyClass var2)
{
	return var1 + var2;
}

template <class MyClass1, class MyClass2>
MyClass1 getSmallerValue(MyClass1 a, MyClass2 b)
{
	return (a<b?a:b);
}

void testFunctionTemplate()
{
	cout << "\n//testFunctionTemplate" << endl;
	int a = 1;
	int b = 2;
	cout << "addValues: " << addValues(a, b) << endl;
}

void testFunctionTemplateMult()
{
	cout << "\n//testFunctionTemplateMult" << endl;
	double a = 1.5;
	int b = 2;
	cout << "getSmallerValue: " << getSmallerValue(a, b) << endl;
}