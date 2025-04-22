// Implement inline member functions inside class definition.
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor defined inline
    Circle(double r) {
        radius = r;
    }

    // Inline function to set radius
    void setRadius(double r) {
        radius = r;
    }

    // Inline function to get radius
    double getRadius() const {
        return radius;
    }

    // Inline function to calculate area
    double area() const {
        return 3.14159 * radius * radius;
    }

    // Inline function to display info
    void display() const {
        cout << "Radius: " << getRadius() << ", Area: " << area() << endl;
    }
};

int main() {
    Circle c1(5.0);
    c1.display();

    c1.setRadius(10.0);
    c1.display();

    return 0;
}

