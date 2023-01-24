#include <iostream>
using namespace std;

// operator overloading
class complex{
    private:
    int real, imag;
    public:

    void print()
    {
        cout << real << endl << imag << "i" << endl;
    }
    complex ()
    {
        real = 0;
        imag = 0 ;
    }

    complex (int r, int i)
    {
        real = r;
        imag = i;
    }

    complex operator +(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
  system ("cls");


    complex c1(5, 6);
    complex c2(6, 12);
    complex c3 ;

    c3 = c1 + c2;

    c3.print();



return 0;
}