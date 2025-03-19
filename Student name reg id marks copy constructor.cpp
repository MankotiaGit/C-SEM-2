#include <iostream>
#include <string>
using namespace std;
class Student
 {
public:
    string name;
    int regid;
    float marks;
    void input(string name, int regid, float marks) 
	{
        this->name = name;
        this->regid = regid;
        this->marks = marks;
    }
    Student(const Student &s)
	 {
        name = s.name;
        regid = s.regid;
        marks = s.marks;
    }
    void print() 
	{
        cout << "My Name Is: " << name << " My Registration Id Is: " << regid << " My Marks Are: " << marks << endl;
    }
};
int main() 
{
    Student s1;
    s1.input("Tanishk", 202459890, 90.1);
    s1.print();
    Student s2 = s1; 
    s2.print();
    return 0;
}
