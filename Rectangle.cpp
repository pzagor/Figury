#include <iostream>

#include "Rectangle.h"

using namespace std;

double Rectangle::countPerimeter()
{
    return sideVer * 2 + sideHor * 2;
}

double Rectangle::countArea()
{
    return sideVer * sideHor;
}

void Rectangle::countVertices()
{
    Bx = Ax + sideHor;
    By = Ay;
    Cx = Ax + sideHor;
    Cy = Ay + sideVer;
    Dx = Ax;
    Dy = Ay + sideVer;
}

void Rectangle::setVerSide(double side)
{
    sideVer = side;
}

void Rectangle::setHorSide(double side)
{
    sideHor = side;
}


void Rectangle::writeShape()
{
    cout.precision(4 + 2);
    cout << "Wpisales prostokat o parametrach: "
         << " Obwod: " << countPerimeter()
         << " Pole powierzchni: " << countArea() 
         << endl;
    countVertices();
    cout << " Wspolrzedne wierzcholkow: "
        << "(" << Ax << ", " << Ay << "), "
        << "(" << Bx << ", " << By << "), "
        << "(" << Cx << ", " << Cy << "), "
        << "(" << Dx << ", " << Dy << ") " 
        << endl << endl;
}

void Rectangle::readShape()
{
    
    cout << "Podaj dlugosc boku w pionie" << endl;
    this->sideVer = readNumber();

    cout << "Podaj dlugosc boku w poziomie" << endl;
    this->sideHor = readNumber();

    cout << "Podaj wspolrzedna x wierzcholka" << endl;
    this->Ax = readNumber();

    cout << "Podaj wspolrzedna y wierzcholka" << endl;
    this->Ay = readNumber();

    writeShape();
}