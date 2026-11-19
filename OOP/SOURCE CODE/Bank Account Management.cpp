#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;
public:
    BankAccount(int number, string holder, double initialBalance) {
        accountNumber = number;
        accountHolder = holder;
        if (initialBalance >= 0) balance = initialBalance;
        else balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful: " << amount << endl;
        } else cout << "Invalid deposit amount!" << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) cout << "Invalid withdrawal amount!" << endl;
        else if (amount > balance) cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawal successful: " << amount << endl;
        }
    }

    double getBalance() { return balance; }

    void displayAccountInformation() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    BankAccount account1(1001, "Rahim", 5000);
    BankAccount account2(1002, "Karim", 3000);

    cout << "INITIAL ACCOUNT INFORMATION" << endl;
    account1.displayAccountInformation();
    account2.displayAccountInformation();

    cout << "TRANSACTIONS FOR ACCOUNT 1" << endl;
    account1.deposit(2000);
    account1.withdraw(1500);
    account1.withdraw(10000);

    cout << endl << "TRANSACTIONS FOR ACCOUNT 2" << endl;
    account2.deposit(1000);
    account2.withdraw(500);
    account2.deposit(-200);

    cout << endl << "FINAL ACCOUNT INFORMATION" << endl;
    account1.displayAccountInformation();
    account2.displayAccountInformation();
    cout << "Balance of Account 1: " << account1.getBalance() << endl;
    cout << "Balance of Account 2: " << account2.getBalance() << endl;
    return 0;
}
