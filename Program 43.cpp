// Use const member functions in a class to restrict modification of data members. 
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor to initialize data members
    Rectangle(int l, int w) : length(l), width(w) {}

    // Const member function: can only read, not modify members
    int getArea() const {
        return length * width;
    }

    void displayDimensions() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    // Non-const function: can modify data members
    void resize(int newLength, int newWidth) {
        length = newLength;
        width = newWidth;
    }
};

int main() {
    Rectangle rect(10, 5);

    rect.displayDimensions();          // Display current dimensions
    cout << "Area: " << rect.getArea() << endl;

    rect.resize(20, 15);               // Modify dimensions

    rect.displayDimensions();          // Display new dimensions
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}

