#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    int accountID;
    double balance;

public:
    Account(int id) : accountID(id), balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > balance) return false;
        balance -= amount;
        return true;
    }

    double getBalance() {
        return balance;
    }

    int getAccountID() {
        return accountID;
    }
};

class Customer {
private:
    int customerID;
    string name;
    Account account;

public:
    Customer(int id, string n, int accountID)
        : customerID(id), name(n), account(accountID) {}

    void deposit(double amount) {
        account.deposit(amount);
    }

    bool withdraw(double amount) {
        return account.withdraw(amount);
    }

    double checkBalance() {
        return account.getBalance();
    }

    int getCustomerID() {
        return customerID;
    }

    string getName() {
        return name;
    }

    int getAccountID() {
        return account.getAccountID();
    }
};

int main() {
    Account acc1(101);
    Customer cust1(1, "Shubh", 101);

    cout << "Initial Balance: " << cust1.checkBalance() << endl;

    cust1.deposit(100.0);
    cout << "Balance after deposit: " << cust1.checkBalance() << endl;

    if (cust1.withdraw(50.0)) {
        cout << "Balance after withdrawal: " << cust1.checkBalance() << endl;
    } else {
        cout << "Withdrawal failed. Insufficient balance." << endl;
    }

    return 0;
}
