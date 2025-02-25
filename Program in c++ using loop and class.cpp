#include <iostream>
using namespace std;
class Student
 {
private:
    string name;
    int marks;
public:
    void setDetails(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }
    void displayDetails()
	 {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        if (marks >= 90) 
		{
            cout << "Grade: A" << endl;
        }
		else if (marks >= 80)
		 {
            cout << "Grade: B" << endl;
        } 
		else if (marks >= 70) 
		{
            cout << "Grade: C" << endl;
        } 
		else if (marks >= 60)
		 {
            cout << "Grade: D" << endl;
        }
		 else 
		 {
            cout << "Grade: F" << endl;
        }
        cout << "-------------------------" << endl;
    }
};
int main()
 {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    Student students[numStudents];
    for (int i = 0; i < numStudents; i++) 
	{
        string name;
        int marks;
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student marks: ";
        cin >> marks;
        students[i].setDetails(name, marks);
    }
    cout << "\nStudent Details and Grades:" << endl;
    for (int i = 0; i < numStudents; i++)
	{
        students[i].displayDetails();
    }';'
    return 0;
}
