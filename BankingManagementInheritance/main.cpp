// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // checkings
    vector<CheckingAccount> checkingAccounts;
    checkingAccounts.push_back(CheckingAccount{});
    checkingAccounts.push_back(CheckingAccount {"Superman"} );
    checkingAccounts.push_back(CheckingAccount {"Batman", 2000} );
    checkingAccounts.push_back(CheckingAccount {"Batman", 2000,3.0} );

    display(checkingAccounts);
    deposit(checkingAccounts, 1000);
    withdraw(checkingAccounts, 2000);

    // trust
    vector<TrustAccount> trustAccounts;
    trustAccounts.push_back(TrustAccount{});
    trustAccounts.push_back(TrustAccount {"Superman"} );
    trustAccounts.push_back(TrustAccount {"Batman", 7000} );
    trustAccounts.push_back(TrustAccount {"Batman", 8000,3.0} );

    display(trustAccounts);
    deposit(trustAccounts, 5000);
    withdraw(trustAccounts, 2000);
    return 0;
}

