#include <iostream>
using namespace std;

class Account


{
    private:

        double balance;

    public:
        Account(double initialBalance)
        {
            balance = initialBalance;
        }

        void deposit(double amount)
        {
            balance += amount;
        }

        void withdraw(double amount)
        {
            if (amount <= balance)
            {
                balance -= amount;
            }
            else
            {
                cout << "Debit amount exceeded account balance." << endl;
            }
        }

        double getBalance() const
        {
            return balance;
        }
};

int main()
{
    Account myAccount(1000.0); // Create an account with an initial balance of 1000.0

    cout << "Initial balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(500.0); // Deposit 500.0
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200.0); // Withdraw 200.0
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(1500.0); // Attempt to withdraw more than the balance
    cout << "Balance after attempted withdrawal: $" << myAccount.getBalance() << endl;

    return 0;
}