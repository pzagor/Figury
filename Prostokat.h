
#include  "Figura.h"

class Prostokat : public Figura

{
public:
    double obliczObwod();
    double obliczPole();
    void ustawBokPion(double bok);
    void ustawBokPoziom(double bok);
    void obliczWspolrzedne();
    void wczytaj();
    //void ustawX(double x);
    //void ustawY(double y);

private:
    double bokPion;
    double bokPoziom;
    double  xB, xC, xD, yB, yC, yD;
    // double xA, yA;


};

