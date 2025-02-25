#include <iostream>
#include <string>
using namespace std;
class Student
 {
private:
    string name;
    int rollNumber;
    float marks;
public:
    Student(string n, int r, float m) 
	{
        name = n;
        rollNumber = r;
        marks = m;
    }
    void displayDetails() 
	{
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() 
{
    Student student1("Tanishk Mankotia", 59890, 9.06);
    student1.displayDetails();
    return 0;
}
