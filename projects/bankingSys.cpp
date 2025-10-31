#include <iostream>
using namespace std;

void create_account(string *username, string *password);
void login(string username, string password, bool *islogged);
void show_balance(double balance, bool islogged);
double deposit_money(double *balance, bool islogged);
void withdraw_money(double *balance, bool islogged);
void transfer_money(double *balance, bool islogged);

int main() {
    double balance = 0.0;
    string username, password;
    bool isrunning = true;
    bool islogged;

    cout << "--------------------------------" << endl;
    cout << "Welcome to the Banking System!" << endl;
    cout << "--------------------------------" << endl;
    cout << "Please select an option below 1-7" << endl;
    cout << "--------------------------------" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Login" << endl;
    cout << "3. Show Balance" << endl;
    cout << "4. Deposit Money" << endl;
    cout << "5. Withdraw Money" << endl;
    cout << "6. Transfer Money" << endl;
    cout << "7. Logout" << endl;
    cout << "--------------------------------" << endl;

    while (isrunning) {
        int option;
        cout << "Enter your option: ";
        cin >> option;
        
        switch (option) {
            case 1: 
                cout << "--------------------------------" << endl;
                create_account(&username, &password);
                cout << "-------------------------------" << endl;
                break;
            case 2:
                cout << "--------------------------------" << endl;
                login(username, password, &islogged);
                cout << "-------------------------------" << endl;
                break;
            case 3:
                cout << "--------------------------------" << endl;
                show_balance(balance, islogged);
                cout << "-------------------------------" << endl;
                break;
            case 4:
                cout << "--------------------------------" << endl;
                deposit_money(&balance, islogged);
                cout << "-------------------------------" << endl;
                break;
            case 5:
                cout << "--------------------------------" << endl;
                withdraw_money(&balance, islogged);
                cout << "-------------------------------" << endl;
                break;
            case 6:
                cout << "--------------------------------" << endl;
                transfer_money(&balance, islogged);
                cout << "-------------------------------" << endl;
                break;
            case 7:
                isrunning = false;
                break;
            default:
                cout << "--------------------------------" << endl;
                cout << "Invalid option. Please try again." << endl;
                cout << "--------------------------------" << endl;
                break;
        }
    }

    cout << "--------------------------------" << endl;
    cout << "Thank you for using the Banking System!" << endl;
    cout << "--------------------------------" << endl;
    return 0;
}

void create_account(string *username, string *password) {
    cout << "Creating account..." << endl;
    cout << "Enter a username: ";
    cin >> *username;
    cout << "Enter a password: ";
    cin >> *password;
    cout << "Account created successfully!" << endl;
    cout << "Please log in to continue." << endl;
}

void login(string username, string password, bool *islogged) {
    *islogged = false;
    cout << "Logging in..." << endl;
    cout << "Enter your details below" << endl;
    string input_username, input_password;
    cout << "Username: ";
    cin >> input_username;
    cout << "Password: ";
    cin >> input_password;

    if (input_username == username && input_password == password) {
        *islogged = true;
        cout << "Login successful!" << endl;
    } else {
        cout << "Login failed. Please check your username and password." << endl;
    }
}

void show_balance(double balance, bool islogged) {
    if (islogged) {
        cout << "Your current balance is: $" << balance << endl;
    } else {
        cout << "You need to log in to see your balance." << endl;
    }
}

double deposit_money(double *balance, bool islogged) {
    if (islogged) {
        double amount;
        cout << "Enter amount to deposit: $";
        cin >> amount;
        if (amount > 0) {
            *balance += amount;
            cout << "Deposit successful! New balance: $" << *balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    } else {
        cout << "You need to log in to deposit money." << endl;
    }
    return *balance;
}

void withdraw_money(double *balance, bool islogged) {
    if (islogged) {
        double amount;
        cout << "Enter amount to withdraw: $";
        cin >> amount;
        if (amount > 0 && amount <= *balance) {
            *balance -= amount;
            cout << "Withdrawal successful! New balance: $" << *balance << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    } else {
        cout << "You need to log in to withdraw money." << endl;
    }
}

void transfer_money(double *balance, bool islogged) {
    if (islogged) {
        double amount;
        cout << "Enter amount to transfer: $";
        cin >> amount;
        if (amount > 0 && amount <= *balance) {
            *balance -= amount;
            cout << "Transfer successful! New balance: $" << *balance << endl;
        } else {
            cout << "Invalid transfer amount." << endl;
        }
    } else {
        cout << "You need to log in gto transfer money." << endl;
    }
}