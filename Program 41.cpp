// Implement a class with static data member and static function. 
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    // Constructor increments the count
    Counter() {
        count++;
    }

    // Static function to access the count
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

// Definition of the static data member outside the class
int Counter::count = 0;

int main() {
    // No objects yet
    Counter::showCount();

    Counter obj1, obj2, obj3;  // Create three objects

    // Show count using the static function
    Counter::showCount();

    return 0;
}

