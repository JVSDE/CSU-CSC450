/*
 * IntegerPointers.cpp
 *
 * Jeff Vandever
 *
 * CSC450-CTA3
 * IntegerPointers Program
 *
 *  Purpose:
 *      Create a program that asks the user to enter 3
 *      integer values as input. Store the values into
 *      3 different variables. For each variable, create
 *      an integer pointer to dynamic memory. Display the
 *      contents of the variables and pointers. Be sure
 *      to use the new operator and delete operators to
 *      manage memory.
 *
 *  Algorithm used:
 *
 *
 *  Program Inputs:
 *      integer1
 *      integer2
 *      integer3
 *
 *  Program Outputs:
 *      integer 1 value
 *      integer 1 location
 *      integer 2 value
 *      integer 2 location
 *      integer 3 value
 *      integer 3 location
 *
 *  Program Limitations:
 *      None
 *
 *  Program Errors:
 *      None
 *
 *  Created on: Dec 7, 2023
 *      Author: vandjeff
 */

#include<iostream>

using namespace std;

main()
{
	int *userIn1 = new int;
	int *userIn2 = new int;
	int *userIn3 = new int;

	cout<<"Enter an integer number(1 of 3): "<<endl;
	cin>>*userIn1;
	cout<<"Enter an integer number(2 of 3): "<<endl;
	cin>>*userIn2;
	cout<<"Enter an integer number(3 of 3): "<<endl;
	cin>>*userIn3;

	cout<<"First number: "<<*userIn1<<endl;
	cout<<"Second number: "<<*userIn2<<endl;
	cout<<"Third number: "<<*userIn3<<endl;



	return 0;
}




