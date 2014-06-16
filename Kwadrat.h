#pragma once
#include  "Figura.h"

class Kwadrat:  public Figura

{
public:
    Kwadrat();
    double obliczObwod();
    double obliczPole();
    void ustawBok(double bokKwadratu);
    void obliczWspolrzedne();
    void wczytaj();
    void ustawX(double x);
    void ustawY(double y);
    double wypiszBok();
    

private:
    double bok;
    double xB, xC, xD, yB, yC, yD;  
    double xA, yA; 


    Kwadrat(double bok);

public: 
    Kwadrat operator +(const Kwadrat & k)
    {
        return Kwadrat(this->bok + k.bok);
    }

};

