#include "stdafx.h"
#include "genericHeader.h"

void printValue(int& iValueRef)
{
	cout << "print lvalue reference\n" << iValueRef << endl;
}

void printValue(int&& iValueRef)
{
	cout << "print rvalue reference\n" << iValueRef << endl;
}

void rvalueReference()
{
	int iSomeLValue = 100;
	int& iSomeLValueRef = iSomeLValue;
	printValue(iSomeLValueRef);
	printValue(iSomeLValue);
	printValue(200);
}

void testRValueReference()
{
	cout << "\n//testRValueReference" << endl;
	rvalueReference();
}