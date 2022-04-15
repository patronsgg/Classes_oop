#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Vector
{
private:
    float x, y;
public:
    Vector();
    Vector(float, float);
    float getX();
    float getY();
    void changeX(float);
    void changeY(float);
    friend ostream& operator<< (ostream &out, const Vector &vector);
    Vector operator +(const Vector & other);
    Vector operator -(const Vector & other);
};

class Complex
{
private:
    float real,
        imaginary;
public:
    Complex();
    Complex(float, float);
    float module();
    friend ostream& operator<< (ostream &out, const Complex &complex);
    Complex operator +(const Complex & other);
    Complex operator -(const Complex & other);
    Complex operator /(const Complex & other);
    Complex operator *(const Complex & other);
};

class Circle
{
private:
    float r;
public:
    Circle();
    Circle(float);
    float getSquare();
    float getLength();
    float getRadius();
    friend ostream& operator<< (ostream &out, const Circle &circle);
};