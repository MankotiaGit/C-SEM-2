#include <iostream>
#include <string>
using namespace std;
class Student
 {
public:
    string name;
    int regid;
    float marks;
    Student(string name, int regid, float marks) 
	{
        this->name = name; 
        this->regid = regid; 
        this->marks = marks; 
    }
    void print() 
	{
        cout << "My Name Is: " << name 
             << ", My Registration Id Is: " << regid 
             << ", My Marks Are: " << marks << endl;
    }
};
int main() 
{
    Student* s1 = new Student("Tanishk", 202459890, 90.1); 
    s1->print(); 
    delete s1; 
    return 0;
}
