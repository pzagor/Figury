#include <iostream>
#include "Square.h"

using namespace std;


Square::Square()
{
    side = 0;
}

Square::Square(double sqSide)
{
    side = sqSide;
}

double Square::countPerimeter()
{
    return side * 4;
}

double Square::countArea()
{
    return side * side;

}
void Square::countVertices()
{
    Bx = Ax + side;
    By = Ay;
    Cx = Ax + side;
    Cy = Ay + side;
    Dx = Ax;
    Dy = Ay + side;
}

void Square::setSide(double sqSide)
{
    side = sqSide;
}


void Square::writeShape()
{
    cout.precision(4+2);
    cout << "Wpisales kwadrat o parametrach: "
         << " Obwod: " << countPerimeter()
         << " Pole powierzchni: " << countArea() 
         << endl;
    countVertices();
    cout << "Wspolrzedne wierzcholkow: "
        << "(" << Ax << ", " << Ay << "), "
        << "(" << Bx << ", " << By << "), "
        << "(" << Cx << ", " << Cy << "), "
        << "(" << Dx << ", " << Dy << ") " 
        << endl << endl;
}

void Square::readShape()
{
    
    cout << "Podaj dlugosc boku" << endl;
    this->side = readNumber();

    cout << "Podaj wspolrzedna x wierzcholka" << endl;
    this->Ax = readNumber();

    cout << "Podaj wspolrzedna y wierzcholka" << endl;
    this->Ay = readNumber();

    writeShape();
    //this->y = wczytaj("wierzcholek Y");
    //x = wczytaj("wierzcholek X");


    //delete (k);
}
