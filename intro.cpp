/*
 * Student Name:
 * Class Info:
 * Program Name:
 * Program Description:
 */

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    //Programming assignment 2 due 2/08 by 11:59 pm
    //Prog. 2a - type the expressions in #6 page 131,
    //in C++, run the code with random values to 
    //make sure the expressions work as required
    //5 points per correct expression (30 points total)
    
    //Prog. 2b - complete programming problems 5 and 6
    //on page 133. (70 points total for both)
    
    //You will have 2 separate cpp programs for each
    //one of these assignments. Name your cpp files as:
    //yourLastName_prog2a.cpp and yourLastName_prog2b.cpp
    //How to read user input for integers and strings
    
    int x, y, z;
    string fullName;
    
    cout << "Enter 3 numbers separated by a space: ";
    cin >> x >> y >> z;
    cout << "x is: " << x << endl;
    
    //after the above lines of code are executed,
    //cin will have
    //the enter key after I enter the value for x, so
    //the following statement will basically clear
    //cin by skipping about 20 character up to
    //the newline character. By doing this, 
    //we are able to read in the name in the statement
    //below.
    cin.ignore(20, '\n'); //clears cin
    
    //cin should be clear now and we can use it
    //to get the full line for the full name
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Your full name is: " << fullName << endl;
    
    system("pause");
    return 0;
}
