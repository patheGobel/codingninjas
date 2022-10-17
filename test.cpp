#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class ComplexNumbers
{
private:
    int re, im;

public:
    ComplexNumbers(int real = 0, int imaginary = 0)
    {
        this->re = real;
        this->im = imaginary;
    }
    void plus(ComplexNumbers Z2)
    {
        re = re + Z2.re;
        im = im + Z2.im;
    }
    void multiply(ComplexNumbers Z2)
    {
        int a=re;
        int b=im;
        this->re = re * Z2.re - im * Z2.im;
       this->im = a * Z2.im + im * Z2.re;
    }
    void print()
    {
        if (im < 0)
            cout << re << " - "
                 << "i" << -1*im << endl;
        else
            cout << re << " + "
                 << "i" << im << endl;
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cout << endl;
    cin >> real2 >> imaginary2;
    cout << endl;

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