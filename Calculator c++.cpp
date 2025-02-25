#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2, result = 0;
    int n, fact = 1;
    system("cls");

    do {
        cout << "Choose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square root\n";
        cout << "6. Exponentiation\n";
        cout << "7. Logarithm (base e)\n";
        cout << "8. Factorial\n";
        cout << "9. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;

            case 5:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Square root: " << result << endl;
                } else {
                    cout << "Error: Cannot compute square root of a negative number!" << endl;
                }
                break;

            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 7:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0) {
                    result = log(num1); // Natural logarithm
                    cout << "Logarithm (base e): " << result << endl;
                } else {
                    cout << "Error: Logarithm of non-positive number!" << endl;
                }
                break;

            case 8:
                cout << "Enter a non-negative integer: ";
                cin >> n;
                if (n < 0) {
                    cout << "Error: Factorial is not defined for negative numbers!" << endl;
                } else {
                    fact = 1;
                    for (int i = 1; i <= n; i++) {
                        fact *= i;
                    }
                    cout << "Factorial: " << fact << endl;
                }
                break;

            case 9:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << "Press enter to continue....";
        cin.ignore();
        cin.get();
    } while (choice != 9);

    return 0;
}
