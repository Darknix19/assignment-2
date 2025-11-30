#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) {
        accountNumber = accNum;
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("ACC12345");

    account.deposit(500);
    account.checkBalance();

    account.withdraw(200);
    account.checkBalance();

    account.withdraw(400);
    account.checkBalance();

    return 0;
}