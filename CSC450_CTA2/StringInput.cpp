/*
 * StringInput.cpp
 *
 * Jeff Vandever
 *
 * CSC450-CTA2.cpp
 * String input console App
 *
 *  Purpose:
 *      Create a program that takes 2 inputs from user.
 *      It will then concatenate the two strings and
 *      output to console.
 *
 *      Take user input 3 times for varying string lengths.
 *
 *  Algorithm used:
 *      None
 *
 *  Program Inputs:
 *      string 1
 *      string 2
 *
 *  Program Outputs:
 *      concat string output
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
#include<string>

int main()
{
	std::string userString1;
	std::string userString2;

	for (int i = 0; i < 3; i++)
	{
		std::cout<<"Enter a string of any length: "<<std::endl;
		std::getline(std::cin, userString1);

		std::cout<<"Enter a second string of any length: "<<std::endl;
		std::getline(std::cin, userString2
				);
		std::cout<<userString1 + userString2<<std::endl;

	}

	return 0;
}



