#include <iostream>
using namespace std;
int main() 
{
    float marks;
    char grade;
    float scholarshipAmount = 0.0;
    cout << "Enter the student's marks (out of 100): ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Marks should be between 0 and 100." << endl;
        return 1; 
    }
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    if (marks >= 95) {
        scholarshipAmount = 5000.0; 
    } else if (marks >= 85 && marks < 95) {
        scholarshipAmount = 3000.0; 
    } else if (marks >= 75 && marks < 85) {
        scholarshipAmount = 1000.0; 
    } else {
        scholarshipAmount = 0.0; 
    }
    cout << "Grade: " << grade << endl;
    if (scholarshipAmount > 0) {
        cout << "Congratulations! You are eligible for a scholarship." << endl;
        cout << "Scholarship Amount: $" << scholarshipAmount << endl;
    } else {
        cout << "Sorry, you are not eligible for a scholarship." << endl;
    }
    return 0; 
}
