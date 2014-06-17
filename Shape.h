#pragma once

class Shape
{
public:
    
    virtual double countPerimeter() = 0;
    virtual double countArea() = 0;
    virtual void countVertices() = 0;
    virtual void readShape() = 0;
    virtual void writeShape() = 0;
    void setX(double x);
    void setY(double y);


protected:
    double Ax, Ay;

};
