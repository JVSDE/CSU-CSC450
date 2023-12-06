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
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	string userFirstName;
	string userLastName;
	string userAddress;
	string userCity;
	char userZipCode[6]={};
	bool valid;


	cout<<"Enter the first name: "<<endl;
	cin>>userFirstName;

	cout<<"Enter the last name: "<<endl;
	cin>>userLastName;

	cout<<"Enter the street address: "<<endl;
	std::cin.ignore(50, '\n');
	getline(cin,userAddress);

	cout<<"Enter the city: "<<endl;
	getline(cin,userCity);

	cout<<"Enter the 5-digit Zip Code: "<<endl;
	do
	{
		valid = false;
		cin>>userZipCode;
		for (int i=0; i < 5; i++)
		{
			int isInt = isdigit(userZipCode[i]);
			if (isInt)
			{
				valid = true;
			}
			else
			{
				cout<<"You must enter only numbers and it must be 5 digits, please try again: "<<endl;
				valid = false;
			}
		}

		if (valid == true && strlen(userZipCode) < 5)
		{
			valid = false;
			cout<<"The Zip Code must be 5 digits long, please try again: "<<endl;
		}
	} while (!valid);


	cout<<"First Name: "<<userFirstName<<"\nLast Name: "<<userLastName<<"\nStreet Address: "<<userAddress<<"\nCity: "<<userCity<<endl;
	cout<<"ZipCode: "<<userZipCode<<endl;


	return 0;

}
