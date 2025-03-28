#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int id;
    string name;
    double salary;
public:
    Employee() : id(0), name("Unknown"), salary(0.0) {
        cout << "Default constructor called." << endl;
    }
    Employee(int empId) : id(empId), name("Unknown"), salary(0.0) {
        cout << "Constructor with ID called." << endl;
    }
    Employee(int empId, const string &empName) : id(empId), name(empName), salary(0.0) {
        cout << "Constructor with ID and name called." << endl;
    }
    Employee(int empId, const string &empName, double empSalary) : id(empId), name(empName), salary(empSalary) {
        cout << "Constructor with ID, name, and salary called." << endl;
    }
    void display() const {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};
int main() {
    Employee emp1;
    emp1.display();
    cout << endl;
    Employee emp2(101);
    emp2.display();
    cout << endl;
    Employee emp3(102, "Alice");
    emp3.display();
    cout << endl;
    Employee emp4(103, "Bob", 75000.0);
    emp4.display();
    cout << endl;
    return 0;
}
