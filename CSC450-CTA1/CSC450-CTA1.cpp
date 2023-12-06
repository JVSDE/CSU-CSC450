/*
 * Jeff Vandever
 *
 * CSC450-CTA1.cpp
 * Console Application
 *
 *  Purpose:
 *      Create a fictional person and output the data.
 *
 *  Algorithm used:
 *      None
 *
 *  Program Inputs:
 *      First Name
 *      Last Name
 *      Street Address
 *      City
 *      Zipcode
 *
 *  Program Outputs:
 *      First Name
 *      Last Name
 *      Street Address
 *      City
 *      Zipcode
 *
 *  Program Limitations:
 *      None
 *
 *  Program Errors:
 *      None
 *
 *  Created on: Dec 2, 2023
 *
 */

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string userFirstName;
	cout<<"Enter the first name: "<<endl;
	cin>>userFirstName;
	string userLastName;
	cout<<"Enter the last name: "<<endl;
	cin>>userLastName;
	string userAddress;
	std::cin.ignore(10, '\n');
	cout<<"Enter the street address: "<<endl;
	getline(cin,userAddress);
	string userCity;
	cout<<"Enter the city: "<<endl;
	getline(cin,userCity);
	int userZipCode;
	cout<<"Enter the Zip Code: "<<endl;
	try
	{
		cin>>userZipCode;
	}
	catch (...)
	{
		cout<<"You must enter a number for the zip code!"<<endl;
	}

	cout<<"First Name: "<<userFirstName<<"\nLast Name: "<<userLastName<<"\nStreet Address: "<<userAddress<<"\nCity: "<<userCity<<endl;
	cout<<"ZipCode: "<<userZipCode<<endl;


	return 0;

}



