#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string client_name;
    string account_number;
    double balance;

public:
    BankAccount() {}
    BankAccount(string client_name, string account_number, double balance) {
        this->client_name = client_name;
        this->account_number = account_number;
        this->balance = balance;
    }
    void createAccount(string client_name, string account_number, double initial_balance) {
        this->client_name = client_name;
        this->account_number = account_number;
        this->balance = initial_balance;
    }

    void displayAccount() 
    {
        cout << "Client Name: " << client_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) 
    {
        if (amount > 0) {
            balance += amount;
            cout << amount << " deposited successfully." << endl;
        }
        else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << amount << " withdrawn successfully." << endl;
        }
        else 
        {
            cout << "Invalid amount for withdrawal." << endl;
        }
    }
};

int main() 
{
    BankAccount account1;
    account1.createAccount("John Doe", "123456789", 1000.0);
    account1.displayAccount();

    account1.deposit(500.0);
    account1.displayAccount();

    account1.withdraw(200.0);
    account1.displayAccount();

    account1.withdraw(2000.0);  
    account1.displayAccount();

    return 0;
}
