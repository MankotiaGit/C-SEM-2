//Implement a class with overloaded constructor and destructor printing a message. 
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called.\n";
    }

    // Display function
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << ".\n";
    }
};

int main() {
    // Using default constructor
    Person p1;
    p1.display();

    cout << endl;

    // Using parameterized constructor
    Person p2("Alice", 25);
    p2.display();

    return 0;
}

