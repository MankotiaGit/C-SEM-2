#include <iostream>
#include <string>
using namespace std;
struct Student 
{
    string name;
    int rollNumber;
    float marks;
};
int main()
 {
    Student student;
    cout << "Enter student's name: ";
    getline(cin, student.name);
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;
    cout << "\nStudent Details:\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
    cout << "\nSize of Student structure: " << sizeof(student) << " bytes" << endl;
    return 0;
}
