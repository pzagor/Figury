#include <iostream>
#include <math.h>
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
    return(pow(side, 2) * sqrt(3))/4;
   
}
void EqTriangle::countVertices()
{
    Bx = Ax + side;
    By = Ay;
    Cx = Ay + side/2;
    Cy = Ax + (side * sqrt(3) / 2);
    
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


double EqTriangle::readNumber() {
    double num;
    cout << "Podaj liczbe " << endl;
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

void EqTriangle::readShape()
{
    double tempBok;
    double tempX;
    double tempY;

    cout << "Podaj dlugosc boku" << endl;
    cin >> tempBok;
    setSide(tempBok);
    //cout << "Podaj wspolrzedna x wierzcholka" << endl;
    this->Ax = readNumber();

    //cin >> tempX;
    //setX(tempX);
    cout << "Podaj wspolrzedna y wierzcholka" << endl;
    cin >> tempY;
    setY(tempY);

    writeShape();
    //this->y = wczytaj("wierzcholek Y");
    //x = wczytaj("wierzcholek X");


    //delete (k);

}
