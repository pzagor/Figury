#pragma once
#include  "Shape.h"

class Square:  public Shape

{
public:
    Square();
    void readShape();
    void writeShape();

private:
    double side;
    double Bx, Cx, Dx, By, Cy, Dy;  
    double countPerimeter();
    double countArea();
    void countVertices();
    void setSide(double sqSide);
  
    Square(double side);

public: 
    Square operator +(const Square & k)
    {
        return Square(this->side + k.side);
    }

};

