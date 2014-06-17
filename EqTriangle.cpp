#include <iostream>
#include "EqTriangle.h"

using namespace std;


EqTriangle::EqTriangle()
{
    side = 0;
}

EqTriangle::EqTriangle(double trSide)
{
    side = trSide;
}

double EqTriangle::countPerimeter()
{
    return side * 3;
}

double EqTriangle::countArea()
{
    //return side * side;

}
void EqTriangle::countVertices()
{
    /*Bx = Ax + side;
    By = Ay;
    Cx = Ax + side;
    Cy = Ay + side;
    Dx = Ax;
    Dy = Ay + side;*/
}

void EqTriangle::setSide(double sqSide)
{
    side = sqSide;
}


void EqTriangle::writeShape()
{
    cout.precision(4 + 2);
    cout << "Wpisales trojkat rownoboczny o parametrach: "
        << " Obwod: " << countPerimeter()
        << " Pole powierzchni: " << countArea()
        << endl;
    countVertices();
    cout << "Wspolrzedne wierzcholkow: "
        << "(" << Ax << ", " << Ay << "), "
        << "(" << Bx << ", " << By << "), "
        << "(" << Cx << ", " << Cy << ") "
        << endl << endl;
}

void EqTriangle::readShape()
{
    double tempBok;
    double tempX;
    double tempY;

    cout << "Podaj dlugosc boku" << endl;
    cin >> tempBok;
    setSide(tempBok);
    cout << "Podaj wspolrzedna x wierzcholka" << endl;
    cin >> tempX;
    setX(tempX);
    cout << "Podaj wspolrzedna y wierzcholka" << endl;
    cin >> tempY;
    setY(tempY);

    writeShape();
    //this->y = wczytaj("wierzcholek Y");
    //x = wczytaj("wierzcholek X");


    //delete (k);
}
