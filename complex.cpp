#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class ComplexNumbers
{
private:
    int re, im;

public:
    ComplexNumbers(int real=0, int imaginary=0)
    {
        this->re = real;
        this->im = imaginary;
    }
    ComplexNumbers plus(ComplexNumbers &Z2)
    {
        ComplexNumbers Z3;
        Z3.re = this->re + Z2.re;
        Z3.im = this->im + Z2.im;
        return Z3;
    }
    ComplexNumbers multiply(ComplexNumbers &Z2)
    {
        ComplexNumbers Z3;
        Z3.re = this->re * Z2.re + im * Z2.im;
        Z3.im = this->re * Z2.im + im * Z2.re;
        return Z3;
    }
    void print()
    {
        cout <<this->re << " + i" <<this->im << endl;
    }
    /*ComplexNumbers operator+(ComplexNumbers &Z2)
    {
        ComplexNumbers Z3;
        Z3.re = re + Z2.re;
        Z3.im = im + Z2.im;
        return Z3;
    }
    ComplexNumbers operator*(ComplexNumbers &Z2)
    {
        ComplexNumbers Z3;
        Z3.re = re * Z2.re + im * Z2.im;
        Z3.im = re * Z2.im + im * Z2.re;
        return Z3;
    }*/
};

int main()
{
    int real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}