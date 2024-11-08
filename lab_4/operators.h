#include <iostream>
#include "RightTriangle.h"
using namespace std;

ostream& operator << (ostream& os, const RightTriangle &triangle)
{
    return os << triangle.get_result() << " " << triangle.get_a() << " " << triangle.get_b();
}

RightTriangle operator ++ (RightTriangle& c1)
{
    c1.set_a(c1.get_a() * 2),c1.set_b(c1.get_b() * 2);
}

RightTriangle operator -- (RightTriangle& c1)
{
    c1.set_a(c1.get_a() / 2),c1.set_b(c1.get_b() / 2);
}

bool operator <= (RightTriangle& c1,RightTriangle& c2)
{
    if (c1.get_result() <= c2.get_result()) {return true;}
    else {return false;}

}

bool operator >= (RightTriangle& c1,RightTriangle& c2)
{
    if (c1.get_result() >= c2.get_result()) {return true;}
    else {return false;}

}