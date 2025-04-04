#include <iostream>
using namespace std;
class test
 {
public:
    int a, b, c;
    double x, y, z;
    char m, n, o;
    void sum(int x, int y)
	 {
        a = x;
        b = y;
        c = a + b;
        cout << c << endl; 
    }
    void sum(double a, double b) 
	{
        x = a;
        y = b;
        z = x + y;
        cout << z << endl; 
    }
    void sum(char a, char b) 
	{
        m = a;
        n = b;
        o = m + n; 
        cout << o << endl; 
    }
};
int main() 
{
    test t;
    t.sum(5, 6);
    t.sum(7.5, 8.9); 
    t.sum('A', 'B'); 
    return 0; 
}
