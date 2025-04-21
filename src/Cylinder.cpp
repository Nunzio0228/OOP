# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iostream>
# include <iomanip>
# include <math.h>

using namespace std;

double Cylinder :: SurfaceArea(){
    double sur = 0;
    sur = M_PI * radius * radius * 2;
    sur += height * (2 * M_PI * radius);
    return sur;
}

double Cylinder :: Volume(){
    double vol = 0;
    vol = M_PI * radius * radius * height;
    return vol;
}

double Cylinder :: Circumference(){
    double cir = 0;
    cir = M_PI * radius * 2;
    return cir;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << std::setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << std::setprecision(3) << cldr.Volume() << endl;
    return out;
}

# endif
