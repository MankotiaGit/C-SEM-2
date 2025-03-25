#include <iostream>
using namespace std; 
class Complex 
{
private:
    int real, img;
public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}
    Complex operator+(const Complex &obj) 
	{
        return Complex(real + obj.real, img + obj.img);
    }
    void display()
	 {
        cout << real << " + " << img << "i" << endl;
    }
};
int main() 
{
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; 
    c3.display(); 
    return 0;
}
