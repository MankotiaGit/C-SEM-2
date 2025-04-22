//Write a program to demonstrate the difference between shallow copy and deep copy.
#include <iostream>
using namespace std;

class Sample {
private:
    int* data;

public:
    // Constructor
    Sample(int val) {
        data = new int;
        *data = val;
        cout << "Constructor called. Data allocated.\n";
    }

    // Shallow Copy Constructor (default behavior)
    // Sample(const Sample& s) = default;

    // Deep Copy Constructor
    Sample(const Sample& s) {
        data = new int;
        *data = *(s.data);
        cout << "Deep Copy Constructor called. Data copied.\n";
    }

    // Set data
    void setData(int val) {
        *data = val;
    }

    // Show data
    void showData() const {
        cout << "Data: " << *data << endl;
    }

    // Destructor
    ~Sample() {
        delete data;
        cout << "Destructor called. Data deallocated.\n";
    }
};

int main() {
    cout << "Creating original object...\n";
    Sample original(100);
    original.showData();

    cout << "\nCreating copy object using deep copy...\n";
    Sample copy = original; // Deep copy constructor is called
    copy.showData();

    cout << "\nModifying original object's data...\n";
    original.setData(999);
    original.showData();
    copy.showData(); // Should remain unchanged if deep copy

    return 0;
}

