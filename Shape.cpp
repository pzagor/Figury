#pragma once
#include "Shape.h"
#include <iostream>



using namespace std;

void Shape::setX(double x)
{
    Ax = x;
}
void Shape::setY(double y)
{
    Ay = y;
}

double Shape::readNumber() 
{
    double num;
    //cout << "Podaj liczbe "  << endl;
    cin >> num;
    // ver1: while( cin.fail() ) // or !cin.good()   no trailing char check.
    while (cin.fail() || (cin.peek() != '\r' && cin.peek() != '\n'))
    {
        cout << "Podaj prawidlowa liczbe" << endl;
        cin.clear();
        while (cin.get() != '\n'); // or cin.ignore(1000, '\n');
        cin >> num;
    }
    return num;
}