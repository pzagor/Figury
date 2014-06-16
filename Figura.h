#pragma once



class Figura
{
public:
    //Figura();
    //~Figura();
    virtual double obliczPole() = 0;
    virtual double obliczObwod() = 0;
    virtual void obliczWspolrzedne() = 0;
    virtual void wczytaj() = 0;
    void ustawX(double x);
    void ustawY(double y);

protected:
    double xA, yA;

};

//Figura::Figura()
//{
//}
//
//Figura::~Figura()
//{
//
//}