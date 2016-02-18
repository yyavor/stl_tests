#include "stdafx.h"
#include "genericHeader.h"

constexpr int someFunction() { return 3; }

void constexprTest(){
	int arr[someFunction() + 3];
}