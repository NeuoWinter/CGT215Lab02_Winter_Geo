// CGT215Lab02_Winter_Geo.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    float A; // declare vars
    float B;
    float X;

    // welcome message
    cout << "================================================================" << endl;
    cout << "||                           Lab 02                           ||" << endl;
    cout << "================================================================" << endl << endl;
    cout << "Welcome, my name is Geo, and this is how to solve the equation: " << endl;
    cout << "AX + B = 0 and find X!" << endl << endl;

    // prompt for A and B vars
    cout << "Please enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;

    cout << endl << "Solving " << A << "x + " << B << " = 0..." << endl << endl;

    // output
    cout << "The answer is: " << endl;
    X = (0 - B) / A;
    cout << "X = " << X << endl << endl;
    cout << "================================================================" << endl;
    cout << "||                           Lab 02                           ||" << endl;
    cout << "================================================================" << endl << endl;

}
