#include <iostream>
int main() 
{
    int rows = 3; 
    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            std::cout << j << " "; 
        }
        std::cout << std::endl; 
    }
    return 0;
}
