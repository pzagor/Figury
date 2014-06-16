#pragma once
#include  "Figura.h"

class Kwadrat:  public Figura

{
public:
    double obliczObwod();
    double obliczPole();
    void ustawBok(double bokKwadratu);
    void obliczWspolrzedne();
    void wczytaj();
    void ustawX(double x);
    void ustawY(double y);

private:
    double bok;
    double xB, xC, xD, yB, yC, yD;  
    double xA, yA; 



};

