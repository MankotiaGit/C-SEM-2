#include <iostream>
using namespace std;
double balance = 0.0;
void checkBalance()
 {
    cout << "Your current balance is: $" << balance << endl;
}
void depositMoney()
 {
    double amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    if (amount > 0)
	 {
        balance += amount;
        cout << "Deposit successful. Your new balance is: $" << balance << endl;
    } 
	else
	 {
        cout << "Invalid amount. Please enter a positive value." << endl;
    }
}
void withdrawCash()
 {
    double amount;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance)
	 {
        balance -= amount;
        cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
    } 
	else if (amount > balance)
	 {
        cout << "Insufficient funds. Your current balance is: $" << balance << endl;
    } 
	else 
	{
        cout << "Invalid amount. Please enter a positive value." << endl;
    }
}
int main() 
{
    int choice;
    bool running = true;
    while (running) 
	{
        cout << "\nWelcome to the Bank Program!" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Cash" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
		 {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawCash();
                break;
            case 4:
                cout << "Thank you for using the Bank Program. Goodbye!" << endl;
                running = false;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
