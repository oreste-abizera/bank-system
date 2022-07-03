#include <iostream>
#include <string>
#include <vector>

using namespace std;

// create a Bank class that has a vector of accounts and methods to add, remove, and print accounts and menu options
class Bank {
public:
    Bank();
    void addAccount(string name, int balance);
    void removeAccount(string name);
    void printAccounts();
    void menu();
    void administratorMenu();
    void normalUserMenu();
    void deposit(string name, int amount);
    void withdraw(string name, int amount);
    void transfer(string name1, string name2, int amount);
    void printTransactions(string name);
    void printTransactions();

    string name;
};


Bank::Bank() {
    name = "ISOKO YUBUKUNGU BANK";
}

void Bank::administratorMenu(){
    cout << "*********************************************************" << endl;
    cout << "*                                                       *" << endl;
    cout << "* Welcome to " << name << "                       *" << endl;
    cout << "*                                                       *" << endl;
    cout << "* 1. Add an account                                     *" << endl;
    cout << "* 2. Remove an account                                  *" << endl;
    cout << "* 3. Print all accounts                                 *" << endl;
    cout << "* 4. Deposit to an account                              *" << endl;
    cout << "* 5. Withdraw from an account                           *" << endl;
    cout << "* 6. Transfer between accounts                          *" << endl;
    cout << "* 7. Print all transactions for an account              *" << endl;
    cout << "* 8. Print all transactions for all accounts            *" << endl;
    cout << "* 9. Exit                                               *" << endl;
    cout << "*                                                       *" << endl;
    cout << "*********************************************************" << endl;
    // ask user to enter a number
    int choice;
    cout << "Enter a number: ";
    cin >> choice;
    // switch statement to call the appropriate function
    switch (choice) {
        case 1:
            // addAccount();
            cout << "Add an account" << endl;
            break;
        case 2:
            // removeAccount();
            cout << "Remove an account" << endl;
            break;
        case 3:
            // printAccounts();
            cout << "Print all accounts" << endl;
            break;
        case 4:
            // deposit();
            cout << "Deposit to an account" << endl;
            break;
        case 5:
            // withdraw();
            cout << "Withdraw from an account" << endl;
            break;
        case 6:
            // transfer();
            cout << "Transfer between accounts" << endl;
            break;
        case 7:
            // printTransactions();
            cout << "Print all transactions for an account" << endl;
            break;
        case 8:
            // printTransactions();
            cout << "Print all transactions for all accounts" << endl;
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void Bank::normalUserMenu(){
    cout << "*********************************************************" << endl;
    cout << "*                                                       *" << endl;
    cout << "* Welcome to " << name << "                       *" << endl;
    cout << "*                                                       *" << endl;
    cout << "* 1. Deposit to my account                              *" << endl;
    cout << "* 2. Withdraw from my account                           *" << endl;
    cout << "* 3. Transfer to another account                        *" << endl;
    cout << "* 4. Print all transactions for my account              *" << endl;
    cout << "* 5. View my Account Info                               *" << endl;
    cout << "* 6. Exit                                               *" << endl;
    cout << "*                                                       *" << endl;
    cout << "*********************************************************" << endl;
    // ask user to enter a number
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    // switch statement to call the appropriate function
    switch (choice) {
        case 1:
            // deposit();
            cout << "Deposit to an account" << endl;
            break;
        case 2:
            // withdraw();
            cout << "Withdraw from an account" << endl;
            break;
        case 3:
            // transfer();
            cout << "Transfer between accounts" << endl;
            break;
        case 4:
            // printTransactions();
            cout << "Print all transactions for my account" << endl;
            break;
        case 5:
            cout << "View my Account info" << endl;
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void Bank::menu(){
    cout << "*********************************************************" << endl;
    cout << "*                                                       *" << endl;
    cout << "* Welcome to " << name << "                       *" << endl;
    cout << "*                                                       *" << endl;
    cout << "* 1. Administrator                                      *" << endl;
    cout << "* 2. Normal User                                        *" << endl;
    cout << "* 3. Exit                                               *" << endl;
    cout << "*                                                       *" << endl;
    cout << "*********************************************************" << endl;
    // ask user to enter a number
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    // switch statement to call the appropriate function
    switch (choice) {
        case 1:
            administratorMenu();
            break;
        case 2:
            normalUserMenu();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

int main() {
    Bank bank;
    bank.menu();
    return 0;
}