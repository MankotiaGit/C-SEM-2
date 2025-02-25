#include <iostream>
using namespace std;
int main() 
{
	//Arithmetic Operators
    int a = 10, b = 5;
    int sum = a + b; 
    int diff = a - b; 
    int prod = a * b; 
    int quotient = a / b; 
    int remainder = a % b; 

    cout << "Arithmetic Operators:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl << endl;

    // Relational Operators
    bool isEqual = (a == b); 
    bool isNotEqual = (a != b); 
    bool isGreater = (a > b); 
    bool isLess = (a < b); 
    bool isGreaterOrEqual = (a >= b);
    bool isLessOrEqual = (a <= b); 

    cout << "Relational Operators:" << endl;
    cout << "a == b: " << isEqual << endl;
    cout << "a != b: " << isNotEqual << endl;
    cout << "a > b: " << isGreater << endl;
    cout << "a < b: " << isLess << endl;
    cout << "a >= b: " << isGreaterOrEqual << endl;
    cout << "a <= b: " << isLessOrEqual << endl << endl;

    // Logical Operators
    bool logicalAnd = (a > 0 && b > 0); 
    bool logicalOr = (a > 0 || b > 0); 
    bool logicalNot = !(a > 0); 

    cout << "Logical Operators:" << endl;
    cout << "a > 0 && b > 0: " << logicalAnd << endl;
    cout << "a > 0 || b > 0: " << logicalOr << endl;
    cout << "!(a > 0): " << logicalNot << endl << endl;

    // Assignment Operators
    int c = 10;
    c += 5;
    c -= 3; 
    c *= 2;
    c /= 4; 
    c %= 3; 

    cout << "Assignment Operators:" << endl;
    cout << "Final value of c: " << c << endl << endl;

    // Bitwise Operators
    int x = 5, y = 3;
    int bitwiseAnd = x & y; 
    int bitwiseOr = x | y; 
    int bitwiseXor = x ^ y; 
    int bitwiseNot = ~x; 
    int leftShift = x << 1; 
    int rightShift = x >> 1;

    cout << "Bitwise Operators:" << endl;
    cout << "x & y: " << bitwiseAnd << endl;
    cout << "x | y: " << bitwiseOr << endl;
    cout << "x ^ y: " << bitwiseXor << endl;
    cout << "~x: " << bitwiseNot << endl;
    cout << "x << 1: " << leftShift << endl;
    cout << "x >> 1: " << rightShift << endl << endl;

    // Ternary Operator
    int max = (a > b) ? a : b; 

    cout << "Ternary Operator:" << endl;
    cout << "Max between a and b: " << max << endl << endl;

    // Increment and Decrement Operators
    int d = 10;
    d++; 
    ++d; 
    d--; 
    --d; 

    cout << "Increment and Decrement Operators:" << endl;
    cout << "Final value of d: " << d << endl << endl;

    // sizeof Operator
    cout << "sizeof Operator:" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl << endl;

    // Type Casting
    double pi = 3.14159;
    int intPi = (int)pi; 

    cout << "Type Casting:" << endl;
    cout << "Double value of pi: " << pi << endl;
    cout << "Integer value of pi: " << intPi << endl;

    return 0;
}
