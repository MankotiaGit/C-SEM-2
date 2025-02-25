#include <iostream>
using namespace std;
class Student 
{
private:
    string name;
    int marks;
public:
    void setDetails(string studentName, int studentMarks) 
	{
        name = studentName;
        marks = studentMarks;
    }
    void calculateGrade()
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
    }
};
int main()
 {
    string name;
    int marks;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student marks: ";
    cin >> marks;
    Student student;
    student.setDetails(name, marks);
    student.calculateGrade();
    return 0;
}
