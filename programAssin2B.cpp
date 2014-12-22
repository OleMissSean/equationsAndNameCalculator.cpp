/*
Sean Stasny
CSC 2134
Program 2b
This program takes a full name and seperates it into a first name, middle name, and last name. It will also calculate the amount of
letters in each of the names.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std; 

int main ()
{
  	string name;  		// Input strings and char
	string firstname;
	string middlename;
	string lastname;
	int blank;
	
	
	cout << "Enter your full name: First, Middle, & Last." << endl; // Statement
	
	getline(cin, name); // Get the name
	
	blank = name.find(' '); // Finds break between names
	
	cout << endl << "Your three names seperated: " << endl << endl; //Lists names
	
	firstname = name.substr(0, blank);  // Saves the first name 
	
	cout << "First name: " << firstname << endl; // Outputs first name			
	
	name = name.substr(blank+1, name.length()-1); // Deletes the first name
													
	blank = name.find(' ');

	middlename = name.substr(0, blank);  // Saves the middle name									
		
	cout << "Middle name: " << middlename << endl; // Outputs middle name
	
	name = name.substr(blank+1, name.length()-1); // Deletes first and last name
	
	lastname = name.substr(0, 200);  // Saves last name
		
	cout << "Last name: " << lastname << endl; // Prints last name
	
	cout << endl << "************************************" << endl; // Line of seperation
	
	cout << endl << "Length of names: " << endl << endl; //Lists names
	
	cout << "The First name is " << firstname.length() << " characters long." << endl;  // Outputs number of chars in first name
	cout << "The Middle name is " << middlename.length() << " characters long." << endl;  // Outputs number of chars in middle name
	cout << "The Last name is " << lastname.length() << " characters long." << endl;  // Outputs number of chars in last name										
	
  return 0;                  
}      
