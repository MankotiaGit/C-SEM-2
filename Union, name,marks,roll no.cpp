#include <iostream>
#include <cstring>
using namespace std;
union Student 
{
    char name[50];      
    int rollNumber;     
    float marks;        
};
int main() 
{
    Student student;
    cout << "Enter student's name: ";
    cin.getline(student.name, 50);  
    cout << "Enter roll number: ";
    cin >> student.rollNumber;       
    cout << "Enter marks: ";
    cin >> student.marks;           
    cout << "\nStudent Details:\n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
    cout << "\nSize of Student union: " << sizeof(student) << " bytes" << endl;
    return 0;
}
