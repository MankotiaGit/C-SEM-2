#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    std::string name;
    int age;
public:
    Student(const string &studentName) : name(studentName), age(0) {
        cout << "Constructor with name called." << endl;
    }
    Student(const string &studentName, int studentAge) : Student(studentName) {
        age = studentAge; 
        cout << "Constructor with name and age called." << endl;
    }
    void display() const {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};
int main() {
    Student student1("Alice");
    student1.display();
    cout << endl;
    Student student2("Bob", 20);
    student2.display();
    cout << endl;
    return 0;
}
