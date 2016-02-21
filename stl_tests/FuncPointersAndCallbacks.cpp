#include "stdafx.h"
#include "genericHeader.h"

void simpleFuncA() { cout << "simpleFuncA call" << endl; }
void simpleFuncB(void(*funcPtr)()) { funcPtr(); }

void testFuncPoinersAndCallbacks()
{
	cout << "\n//testFunctionTemplate" << endl;
	void(*ptr)() = simpleFuncA;
	simpleFuncB(ptr);
}