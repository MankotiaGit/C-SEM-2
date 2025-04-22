//Demonstrate encapsulation using private and public access specifiers.
#include <iostream>
using namespace std;

class Employee {
private:
    // Private data members - encapsulated
    string name;
    int age;
    double salary;

public:
    // Public member function to set values (setter)
    void setData(string empName, int empAge, double empSalary) {
        name = empName;
        age = empAge;
        salary = empSalary;
    }

    // Public member function to get and display values (getter)
    void displayData() const {
        cout << "Employee Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;

    // Set data using public method (not directly)
    emp.setData("John Doe", 30, 50000.0);

    // Display data using public method
    emp.displayData();

    return 0;
}

