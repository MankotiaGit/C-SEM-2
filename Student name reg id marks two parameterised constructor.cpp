#include <iostream>
#include <string>
using namespace std;
class Student 
{
public:
    string name;
    int regid;
    float marks;
    int age; 
    string course;
    Student(string name, int regid, float marks) 
	{
        this->name = name;
        this->regid = regid;
        this->marks = marks;
        this->age = 0; 
        this->course = "";
    }
    Student(string name, int regid, int age, string course)
	 {
        this->name = name;
        this->regid = regid;
        this->marks = 0.0; 
        this->age = age;
        this->course = course;
    }
    void print()
	 {
        cout << "My Name Is: " << name 
             << ", My Registration Id Is: " << regid 
             << ", My Marks Are: " << marks 
             << ", My Age Is: " << age 
             << ", My Course Is: " << course << endl;
    }
};
int main()
 {
    Student s1("Tanishk", 202459890, 90.1);
    s1.print();
    Student s2("John Doe", 202459891, 20, "Computer Science");
    s2.print();
    return 0;
}
