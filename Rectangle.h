
#include  "Shape.h"

class Rectangle : public Shape

{
public:
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
    


};

