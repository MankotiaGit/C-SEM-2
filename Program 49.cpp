// Create a singleton class to allow only one object of the class.
#include <iostream>
using namespace std;

class Singleton {
private:
    // Private static pointer to the single instance
    static Singleton* instance;

    // Private constructor to prevent direct instantiation
    Singleton() {
        cout << "Singleton instance created." << endl;
    }

public:
    // Delete copy constructor and assignment operator to prevent copying
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static function to provide access to the single instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Sample member function
    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }

    // Destructor (optional for demonstration)
    ~Singleton() {
        cout << "Singleton instance destroyed." << endl;
    }
};

// Initialize static member to nullptr
Singleton* Singleton::instance = nullptr;

int main() {
    // Trying to get Singleton instances
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    Singleton* s2 = Singleton::getInstance();
    s2->showMessage();

    // Check if both instances are the same
    if (s1 == s2) {
        cout << "Both instances are the same (singleton confirmed)." << endl;
    } else {
        cout << "Different instances (not a singleton)." << endl;
    }

    // Clean up the allocated memory (optional)
    delete s1; // This will also delete s2 since they point to the same instance

    return 0;
}

