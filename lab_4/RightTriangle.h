//
// Created by B-ZONE on 07.11.2024.
//

#ifndef LAB_4_RIGHTTRIANGLE_H
#define LAB_4_RIGHTTRIANGLE_H

#include<iostream>
using namespace std;

class RightTriangle {

private:
    double a;
    double b;
    //double c;
    double result;


public:
    RightTriangle(double r_a,double r_b);

    RightTriangle(double r_a);

    RightTriangle();

    void set_a(double r_a);

    void set_b(double r_b);

    double calculate_result();

    double get_result() const;

    double get_a() const;

    double get_b() const;

    operator double() const
    {
        return result;
    }

    operator bool() const
    {
        if (a + b > 0){return true;}
        else {return false;}
    }




};



#endif //LAB_4_RIGHTTRIANGLE_H
