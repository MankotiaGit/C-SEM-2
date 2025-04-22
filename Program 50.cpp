//Demonstrate object slicing in inheritance using a base and derived class.
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    Animal(string n) : name(n) {}

    void speak() const {
        cout << "Animal speaks. Name: " << name << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    string breed;

    Dog(string n, string b) : Animal(n), breed(b) {}

    void bark() const {
        cout << "Dog barks. Breed: " << breed << endl;
    }
};

void showAnimal(Animal a) {
    cout << "--- Inside showAnimal (object slicing occurs) ---" << endl;
    a.speak();
    // a.bark(); // Not allowed, as 'a' is of type Animal (sliced)
}

int main() {
    Dog myDog("Buddy", "Golden Retriever");

    myDog.speak();  // From base
    myDog.bark();   // From derived

    // Pass derived object by value to a function that accepts base class
    showAnimal(myDog); // Object slicing happens here

    return 0;
}

