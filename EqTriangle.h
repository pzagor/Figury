#pragma once
#include  "Shape.h"

class EqTriangle : public Shape

{
public:
    EqTriangle();
    void readShape();
    void writeShape();
    //double readNumber(); // FIX

private:
    double side;
    double Bx, Cx, By, Cy;
    double countPerimeter();
    double countArea();
    void countVertices();
    void setSide(double trSide);
    

    EqTriangle(double side);

public:
    EqTriangle operator +(const EqTriangle & k)
    {
        return EqTriangle(this->side + k.side);
    }

};

