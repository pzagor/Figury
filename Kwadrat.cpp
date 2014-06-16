#include <iostream>
#include "Kwadrat.h"

using namespace std;

double Kwadrat::obliczObwod()
{
    return bok * 4;
}

double Kwadrat::obliczPole()
{
    return bok * bok;

}
void Kwadrat::obliczWspolrzedne()
{
    xB = xA + bok;
    yB = yA;
    xC = xA + bok;
    yC = yA + bok;
    xD = xA;
    yD = yA + bok;

}
void Kwadrat::ustawX(double x)
{
    xA = x;
}
void Kwadrat::ustawY(double y)
{
    yA = y;
}

void Kwadrat::ustawBok(double bokKwadratu)
{
    bok = bokKwadratu; 
}

void Kwadrat::wczytaj()
{
    //Kwadrat * k = new Kwadrat();
    double tempBok;
    double tempX;
    double tempY;

    cout << "Podaj dlugosc boku" << endl;
    cin >> tempBok;
    ustawBok(tempBok);
    cout << "Podaj wspolrzedna x wierzcholka" << endl;
    cin >> tempX;
    ustawX(tempX);
    cout << "Podaj wspolrzedna y wierzcholka" << endl;
    cin >> tempY;
    ustawY(tempY);

    cout << "obwod: " << obliczObwod() << endl;
    cout << "pole: " <<obliczPole() << endl;
    obliczWspolrzedne();
    cout << "wspolrzedne: " << endl
        << "x: " << xA << "y: " << yA << endl
        << "x: " << xB << "y: " << yB << endl
        << "x: " << xC << "y: " << yC << endl
        << "x: " << xD << "y: " << yD << endl;
    cin >> tempX;
    //delete (k);

}
