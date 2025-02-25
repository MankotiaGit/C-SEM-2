#include <iostream>
int main() 
{
    int rows = 3; 
    for (int i = 1; i <= rows; i++) 
	{
       for (int j = i; j < rows; j++)
	    {
            std::cout << " ";
        }
        for (int j = i; j >= 1; j--)
		 {
            std::cout << j;
        }
        for (int j = 2; j <= i; j++)
		{
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}
