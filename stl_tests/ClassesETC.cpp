#include "stdafx.h"
#include "ClassesETC.h"
#include "genericHeader.h"


FirstParentClass::FirstParentClass()
{
	cout << "FirstParentClass initialize " << endl;
}

void FirstParentClass::SetValues()
{
	m_iSomeVal = 1;
	m_iSomeVal2 = 2;
}

void FirstParentClass::PrintValues()
{
	cout << "\FirstParentClass::PrintValues" << endl;
	cout << "m_iSomeVal: " << m_iSomeVal << endl;
	cout << "m_iSomeVal2: " << m_iSomeVal2 << endl;
}

//---------------------------------------------------------------
ClassSecondParent::ClassSecondParent()
{
	cout << "ClassSecondParent initialize " << endl;
}

ClassChild::ClassChild()
{
	cout << "ClassChild initialize " << endl;
}
//---------------------------------------------------------------

void testClassesETC()
{
	cout << "\n//testClassesETC" << endl;
	FirstParentClass firstTestClass = FirstParentClass();
	firstTestClass.SetValues();
	firstTestClass.PrintValues();
	ClassChild childObj = ClassChild();
}
//============issue54issue53=============
