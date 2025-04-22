// Create a class to demonstrate friend function accessing two different classes. 
#include <iostream>
using namespace std;

// Forward declaration of class Beta
class Beta;

class Alpha {
private:
    int a;

public:
    Alpha(int val) : a(val) {}

    // Declare the friend function
    friend void showSum(Alpha, Beta);
};

class Beta {
private:
    int b;

public:
    Beta(int val) : b(val) {}

    // Declare the friend function
    friend void showSum(Alpha, Beta);
};

// Friend function definition
void showSum(Alpha objA, Beta objB) {
    int sum = objA.a + objB.b;
    cout << "Sum of Alpha and Beta values: " << sum << endl;
}

int main() {
    Alpha alphaObj(10);
    Beta betaObj(20);

    // Call the friend function
    showSum(alphaObj, betaObj);

    return 0;
}

