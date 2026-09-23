#include <iostream>
#include <math.h>
using namespace std;
class complex
{
    float real, img;

public:
    void read()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> img;
    }
    void display()
    {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }
    complex operator+(complex c);
    complex operator-(complex c1);
    complex operator*(complex c1);
    complex operator/(complex c1);
};
complex complex::operator+(complex c)
{
    complex sum;
    sum.real = real + c.real;
    sum.img = img + c.img;
    return sum;
}
complex complex::operator-(complex c1)
{
    complex diff;
    diff.real = real - c1.real;
    diff.img = img - c1.img;
    return diff;
}
complex complex::operator*(complex c1)
{
    complex product;
    product.real = (real * c1.real) - (img * c1.img);
    product.img = (img * c1.real) + (real * c1.img);
    return product;
}
complex complex::operator/(complex c1)
{
    complex quotient;
    float din = (c1.real * c1.real) + (c1.img * c1.img);
   
    if (din == 0) {
        cout << "\nError: Division by zero!" << endl;
        quotient.real = 0;
        quotient.img = 0;
        return quotient;
    }
    quotient.real = ((real * c1.real) + (img * c1.img)) / din;
    quotient.img = ((img * c1.real) - (real * c1.img)) / din;
    return quotient;
}
int main()
{
    complex c, c1, ans;
    cout << "For first complex number:" << endl;
    c.read();
    cout << "\nFor second complex number:" << endl;
    c1.read();
    ans = c + c1;
  
    cout << "\nSum is: ";
    ans.display();
    ans = c - c1;
  
    cout << "\nDifference is: ";
    ans.display();
    ans = c * c1;
  
    cout << "\nProduct is: ";
    ans.display();
    ans = c / c1;
  
    cout << "\nQuotient is: ";
    ans.display();
    return 0;
}
