#include <iostream>

#include "Prostokat.h"

using namespace std;

double Prostokat::obliczObwod()
{
    return bokPion * 2 + bokPoziom *2;
}

double Prostokat::obliczPole()
{
    return bokPion * bokPoziom;

}

void Prostokat::obliczWspolrzedne()
{
    xB = xA + bokPoziom;
    yB = yA;
    xC = xA + bokPoziom;
    yC = yA + bokPion;
    xD = xA;
    yD = yA + bokPion;

}


void Prostokat::ustawBokPion(double bok)
{
    bokPion = bok;
}

void Prostokat::ustawBokPoziom(double bok)
{
    bokPoziom = bok;
}

//void Prostokat::ustawX(double x)
//{
//    xA = x;
//}
//void Prostokat::ustawY(double y)
//{
//    yA = y;
//}

void Prostokat::wczytaj()
{
    
    double tempBokPion;
    double tempBokPoziom;
    double tempX;
    double tempY;

    cout << "Podaj dlugosc boku w pionie" << endl;
    cin >> tempBokPion;
    ustawBokPion(tempBokPion);
    cout << "Podaj dlugosc boku w poziomie" << endl;
    cin >> tempBokPoziom;
    ustawBokPoziom(tempBokPoziom);
    cout << "Podaj wspolrzedna x wierzcholka" << endl;
    cin >> tempX;
    ustawX(tempX);
    cout << "Podaj wspolrzedna y wierzcholka" << endl;
    cin >> tempY;
    ustawY(tempY);

    cout << "obwod: " << obliczObwod() << endl;
    cout << "pole: " << obliczPole() << endl;
    obliczWspolrzedne();
    cout << "wspolrzedne: " << endl
        << "x: " << xA << "y: " << yA << endl
        << "x: " << xB << "y: " << yB << endl
        << "x: " << xC << "y: " << yC << endl
        << "x: " << xD << "y: " << yD << endl;
    cin >> tempX;
    //delete (k);
}