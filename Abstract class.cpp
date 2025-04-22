#include <iostream>
using namespace std;
class Animal
 {
public:
    virtual void speak() const = 0; // Pure virtual function
};
class Dog : public Animal 
{
public:
    void speak() const override 
	{
        cout << "Woof!" << endl;
    }
};
class Cat : public Animal 
{
public:
    void speak() const override 
	{
        cout << "Meow!" << endl;
    }
};
int add(int x, int y)
 {
    return x + y;
}
int main() 
{
    Dog dog;
    Cat cat;
    dog.speak(); 
    cat.speak(); 
    int result = add(3, 5);
    std::cout << "Result of addition: " << result << std::endl; // Output: Result of addition: 8
    return 0;
}
