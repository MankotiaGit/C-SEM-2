#include <iostream>
#include <string>
using namespace std;
class Student
 {
public:
    string name;
    int regid;
    float marks;
    Student()
	 {
        name = "Unknown";  
        regid = 0;         
        marks = 0.0;       
    }
    void setDetails(string name, int regid, float marks) 
	{
        this->name = name;
        this->regid = regid;
        this->marks = marks;
    }
    void print() 
	{
        cout << "My Name Is: " << name << " My Registration Id Is: " << regid << " My Marks Are: " << marks << endl;
    }
};
int main()
 {
    Student s1; 
    s1.setDetails("Tanishk", 202459890, 90.1); 
    s1.print(); 
    return 0;
}
