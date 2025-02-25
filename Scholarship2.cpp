#include <iostream>
using namespace std;
void determineGradeAndScholarship(float marks, char &grade, float &scholarshipAmount)
 {
    if (marks >= 90)
	 {
        grade = 'A';
        scholarshipAmount = (marks >= 95) ? 5000.0 : 3000.0;
    }
	 else if (marks >= 80)
	  {
        grade = 'B';
        scholarshipAmount = 3000.0;
    } 
	else if (marks >= 70)
	 {
        grade = 'C';
        scholarshipAmount = 1000.0;
    } 
	else if (marks >= 60)
	 {
        grade = 'D';
        scholarshipAmount = 0.0;
    }
	 else 
	 {
        grade = 'F';
        scholarshipAmount = 0.0;
    }
}
int main()
 {
    float marks;
    char grade;
    float scholarshipAmount = 0.0;
    while (true) 
	{
        cout << "Enter the student's marks (out of 100): ";
        cin >> marks;
        if (cin.fail() || marks < 0 || marks > 100) 
		{
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid marks! Please enter a number between 0 and 100." << endl;
        } 
		else 
		{
            break; 
        }
    }
    determineGradeAndScholarship(marks, grade, scholarshipAmount);
    cout << "Grade: " << grade << endl;
    if (scholarshipAmount > 0) 
	{
        cout << "Congratulations! You are eligible for a scholarship." << endl;
        cout << "Scholarship Amount: $" << scholarshipAmount << endl;
    } 
	else
	 {
        cout << "Sorry, you are not eligible for a scholarship." << endl;
    }

    return 0; 
}
