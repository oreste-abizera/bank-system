#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// create a Bank class that has a vector of accounts and methods to add, remove, and print accounts and menu options
class Bank {
public:
    Bank();
    
    void menu();
    void administratorMenu();
    void normalUserMenu();

    void addAccount();
    void removeAccount(string name);
    void printAccounts();
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

void Bank::addAccount(){
    // bank account fields for the new account to be added
    string name;
    string type;
    int balance;
    int accountNumber;

    // ask admin to enter account details
    cout << "Enter the name of the account owner: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the type of the account: ";
    cin >> type;
    cout << "Enter the balance of the account: ";
    cin >> balance;
    cout << "Enter the account number: ";
    cin >> accountNumber;

    m:
    int found = 0;
    fstream data;
    string nam;
    string ty;
    int bal;
    int accNum;

    data.open("accounts.txt", ios::in);
    if (data.fail()) {
        cout << "Error opening file" << endl;
        data.close();
    } else {
        // read the file line by line
        while (data >> accNum >> ty >> bal >> nam) {
            // if the account number already exists, ask admin to enter a new account number
            if (accNum == accountNumber) {
                cout << "Account number already exists" << endl;
                cout << "Enter new account number: ";
                cin >> accountNumber;
                found = 1;
                break;
            }
        }
        data.close();
    }

        if(found == 1){
            goto m;
        }else {
        data.open("accounts.txt", ios::app | ios::in);
        data << accountNumber << " " << type << " " << balance << " " << name << endl;
        data.close();
                
        cout << "\nAccount added successfully" << endl;
        cout << "*" << "Account Number: " << accountNumber << "*" << endl;
        cout << "*" << "Account Type: " << type << "*" << endl;
        cout << "*" << "Account Balance: " << balance << "*" << endl;
        cout << "*" << "Account Owner: " << name << "*" << endl << endl;
  }
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
    cout << "Enter Your Choice: ";
    cin >> choice;
    // switch statement to call the appropriate function
    switch (choice) {
        case 1:
            addAccount();
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
    string username;
    string password;
    cout << "Enter your choice: ";
    cin >> choice;
    // switch statement to call the appropriate function
    switch (choice) {
        case 1:
            cout << "Enter your username: ";
            cin >> username;
            cout << "Enter your password: ";
            cin >> password;
            if (username == "abizera" && password == "admin") {
                administratorMenu();
            } else {
                cout << "Invalid username or password" << endl;
            }
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
