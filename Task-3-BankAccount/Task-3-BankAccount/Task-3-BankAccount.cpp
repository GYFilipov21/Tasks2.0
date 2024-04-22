#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string client_name;
    string account_number;
    double balance;

public:
    BankAccount() : client_name(""), account_number(""), balance(0.0) {}

    void create_account(string name, string acc_number, double initial_balance)
    {
        client_name = name;
        account_number = acc_number;
        balance = initial_balance;
    }

    void display_account()
    {
        cout << "Client Name: " << client_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit of " << amount << " completed. Current balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        cout << "Withdrawal of " << amount;
        if (balance >= amount) {
            balance -= amount;
            cout << " completed. Current balance: " << balance << endl;
        }
        else
        {
            cout << "$. Insufficient funds. Withdrawal not processed." << endl;
        }
    }
};

int main() {
    BankAccount account1;
    account1.create_account("Joro", "123456789", 1000.0);
    account1.display_account();

    account1.deposit(500.0);

    account1.withdraw(200.0);
    account1.withdraw(2000.0);

}
