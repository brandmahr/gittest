// gittest.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include "myheader.h"
#include<iostream>

using namespace std;

int main() 
{
	myheader a(2);
	cout << a.foo() << endl;
	while (true);
	return 0;
};