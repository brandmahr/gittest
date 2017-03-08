#include "stdafx.h"
#include "myheader.h"
#include <iostream>

using namespace std;

int myheader::foo() 
{	
	return 1;
}
myheader::myheader() {
	cout << "string" << endl;
}
myheader::myheader(int i) {
	cout << "intheader" << endl;
}