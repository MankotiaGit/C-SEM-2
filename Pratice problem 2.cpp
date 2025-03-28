#include <iostream>
using namespace std;
class Calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }
    float sum(float a, float b) {
        return a + b;
    }
    float sum(int a, float b) {
        return a + b;
    }
    float sum(float a, int b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    int intResult = calc.sum(5, 10);
    cout << "Sum of integers (5 + 10): " << intResult << endl;
    float floatResult = calc.sum(5.5f, 10.2f);
    cout << "Sum of floats (5.5 + 10.2): " << floatResult << endl;
    float mixedResult1 = calc.sum(5, 10.5f);
    cout << "Sum of mixed (5 + 10.5): " << mixedResult1 << endl;
    float mixedResult2 = calc.sum(10.5f, 5);
    cout << "Sum of mixed (10.5 + 5): " << mixedResult2 << endl;
    return 0;
}
