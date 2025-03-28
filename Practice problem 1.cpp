#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle() : length(1.0), width(1.0) {
    cout << "Default constructor called." << endl;
    }
    Rectangle(double l, double w) : length(l), width(w) {
    cout << "Parameterized constructor called." << endl;
    }
    Rectangle(const Rectangle &rect) : length(rect.length), width(rect.width) {
    cout << "Copy constructor called." << endl;
    }
    double area() const {
        return length * width;
    }
    void display() const {
    cout << "Length: " << length << ", Width: " << width << endl;
    }
};
int main() {
    Rectangle rect1;
    rect1.display();
    cout << "Area: " << rect1.area() << endl;
    Rectangle rect2(5.0, 3.0);
    rect2.display();
    cout << "Area: " << rect2.area() << endl;
    Rectangle rect3 = rect2;
    rect3.display();
    cout << "Area: " << rect3.area() << endl;
    return 0;
}
