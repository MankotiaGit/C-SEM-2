#include <iostream>
using namespace std;
int main() 
{
    int n = 3; 
    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= n - i; j++) 
		{
            cout << " ";
        }
        for (int j = i; j >= 1; j--) 
		{
            cout << j;
        }
        for (int j = 2; j <= i; j++) 
		{
            cout << j;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) 
	{
        for (int j = 1; j <= n - i; j++) 
		{
            cout << " ";
        }
        for (int j = i; j >= 1; j--) 
		{
            cout << j;
        }
        for (int j = 2; j <= i; j++) 
		{
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
