
#include  "Shape.h"

class Rectangle : public Shape

{
public:
    Rectangle();
    void readShape();
    void writeShape();
   

private:
    
    double sideVer;
    double sideHor;
    double  Bx, Cx, Dx, By, Cy, Dy;

    double countPerimeter();
    double countArea();
    void countVertices();
    void setVerSide(double bok);
    void setHorSide(double bok);

    Rectangle(double sideVer, double sideHor);

public:
   
    Rectangle operator +(const Rectangle & k)
    {
        return Rectangle(this->sideVer + k.sideVer, this->sideHor + k.sideHor);
    }
    


};

