#include<iostream>
#include <cmath>
#include "RightTriangle.h"

RightTriangle::RightTriangle(double r_a,double r_b)
{
    if (r_a > 0)
    {
        a = r_a;
    }
    else
    {
        a = 1;
    }

    if (r_b > 0)
    {
        b = r_b;
    }
    else
    {
        b = 1;
    }
}

RightTriangle::RightTriangle(double r_a)
{
    if (r_a > 0) {
        a = r_a;
    } else {
        a = 1;
    }
    b = a;
}

RightTriangle::RightTriangle()
{
    a = 1;
    b = 1;
}

void RightTriangle::set_a(double r_a)
{
    if (r_a > 0)
    {
        a = r_a;
    }
    else
    {
        a = 1;
    }
}

void RightTriangle::set_b(double r_b)
{
    if (r_b > 0)
    {
        b = r_b;
    }
    else
    {
        b = 1;
    }
}

double RightTriangle::calculate_result()
{
    result = (a * b * 0.5);
    //double s;
    //c = pow(pow(a,2) + pow(b,2),0.5);
    //s = (a + b +c)/2;
    //result = pow(s*(s - a)*(s - b)*(s - c),0.5);

}

double RightTriangle::get_result() const { return result; };

double RightTriangle::get_a() const { return a; };

double RightTriangle::get_b() const { return b; }
