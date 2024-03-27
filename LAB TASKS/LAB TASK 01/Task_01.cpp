#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int real, int img)
    {
        this->img = img;
        this->real = real;
    }
    Complex operator+(Complex obj1)
    {
        Complex temp;
        temp.img = img + obj1.img;
        temp.real = real + obj1.real;
        return temp;
    }
    Complex operator-(Complex obj1)
    {
        Complex temp;
        temp.img = img - obj1.img;
        temp.real = real - obj1.real;
        return temp;
    }
    Complex operator*(Complex obj1)
    {
        Complex temp;
        temp.real = (real * obj1.real) - (img * obj1.img);
        temp.img = (real * obj1.img) + (img * obj1.real);
        return temp;
    }
    void show()
    {
        if (img < 0)
        {
            cout << real << img << "i" << endl;
        }
        else
        {
            cout << real << "+" << img << "i" << endl;
        }
    }
};
int main()
{

    Complex obj1(20, 30), obj2(30, 40), obj3, obj4, obj5;
    obj3 = obj1 + obj2;
    obj4 = obj1 - obj2;
    obj5 = obj1 * obj2;

    cout << "After addition" << endl;
    obj3.show();
    cout << "After subtraction" << endl;
    obj4.show();
    cout << "After multiplication" << endl;
    obj5.show();

    return 0;
}
