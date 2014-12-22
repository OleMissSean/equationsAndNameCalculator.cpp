/*
Sean Stasny
CSC 2134
Program 2a
This program will solve 6 set equations with users choice of variables.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

	const float PI = 3.14159265; // Defining PI
	
	float A; // Inputing chars
	float B;
	float C;
	float D;
	float X;
	float Y;	
	
	float eqA; // Inputing floats
	float eqB;
	float eqC;
	float eqD;
	float eqE;
	float eqF;
	
using namespace std;

int main ()
{
	
	cout << "Find equation A: 3X+Y" << endl;                 // Equations
	cout << "Find equation B: (A^2)+2B+C" << endl;
	cout << "Find equation C: ((A+B)/(C-D))*(X/Y)" << endl;
	cout << "Find equation D: ((A^2)+2B+C)/(XY)" << endl;
	cout << "Find equation E: sqrt(|A-B|)" << endl;
	cout << "Find equation F: X^(-cos(Y*(PI/180)))" << endl;
	
	cout << "*******************************************" << endl; // Seperator
	
	cout  <<"Input A, B, C, D, X, & Y" << endl;
	
	cin >> A >> B >> C >> D >> X >> Y;
	
	eqA = 3*X+Y;                    // Defining equations
	eqB = pow(A, 2)+2*B+C;
	eqC = ((A+B)/(C-D)) * (X/Y);
	eqD = ((pow(A, 2)+2*B+C)/D)/(X*Y);
	eqE = sqrt(abs(A-B));
	eqF = pow(X, -cos(Y*(PI/180)));
	
	cout << "*******************************************" << endl; // Seperator
	
	cout << "Answer to equation A: " << eqA << endl; // Answers
	cout << "Answer to equation B: " << eqB << endl;
	cout << "Answer to equation C: " << eqC << endl;
	cout << "Answer to equation D: " << eqD << endl;
	cout << "Answer to equation E: " << eqE << endl;
	cout << "Answer to equation F: " << eqF << endl;
	
    return 0;
}

