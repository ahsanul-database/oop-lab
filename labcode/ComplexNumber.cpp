#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex(float r = 0.0, float i = 0.0)
    {
        this->real = r;
        this->img = i;
    }

    Complex operator+(Complex C)
    {
        return Complex(real + C.real, img + C.img);
    }

    void display()
    {
        cout << real << " + " << img << "i\n";
    }
};

int main()
{
    Complex num1(3.5, 2.0);
    Complex num2(2.5, 1.5);

    Complex sum = num1 + num2;

    cout << "Sum: ";
    sum.display();

    return 0;
}
