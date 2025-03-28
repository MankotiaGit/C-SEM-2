#include <iostream>
using namespace std;
class MaxFinder {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    }
    int max(int a, int b, int c) {
        return max(max(a, b), c); 
    }
    float max(float a, float b) {
        return (a > b) ? a : b;
    }
};
int main() {
    MaxFinder finder;
    int int1 = 10, int2 = 20;
    int maxInt = finder.max(int1, int2);
    cout << "Maximum of " << int1 << " and " << int2 << " is: " << maxInt << endl;
    int int3 = 30;
    int maxThreeInts = finder.max(int1, int2, int3);
    cout << "Maximum of " << int1 << ", " << int2 << ", and " << int3 << " is: " << maxThreeInts << endl;
    float float1 = 10.5f, float2 = 20.3f;
    float maxFloat = finder.max(float1, float2);
    cout << "Maximum of " << float1 << " and " << float2 << " is: " << maxFloat << endl;
    return 0;
}
