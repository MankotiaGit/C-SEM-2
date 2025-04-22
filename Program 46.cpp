//Create a class and make a friend class access its private members. 
#include <iostream>
using namespace std;

// Forward declaration
class B;

class A {
private:
    int privateData;

public:
    A() {
        privateData = 42;
    }

    // Declare class B as a friend
    friend class B;
};

class B {
public:
    void showPrivateData(A objA) {
        // Accessing private member of class A
        cout << "Accessing private data of class A: " << objA.privateData << endl;
    }
};

int main() {
    A aObj;
    B bObj;

    bObj.showPrivateData(aObj);

    return 0;
}

