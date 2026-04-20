//
// Created by anton on 20.04.2026.
//

#include "TrustAccount.h"
#include "Savings_Account.h"

std::ostream &operator<<(std::ostream &os, const TrustAccount& obj) {
    os << obj.name << " " << obj.balance << " " << obj.int_rate << " " << obj.depositBonus;
    return os;
}

TrustAccount::TrustAccount(std::string name, double balance, double int_rate, double depositBonus)
    : Savings_Account(name, balance, int_rate), withdrawCounter(0), depositBonus(depositBonus){
    std::cout << "TrustAccount: constructor" << std::endl;
}

bool TrustAccount::withdraw20Checker(double amount) {
    return amount <= (0.2 * balance);
}

bool TrustAccount::withdraw(double amount) {
    if (withdrawCounter < 3 && withdraw20Checker(amount)) {
        withdrawCounter++;
        return Savings_Account::withdraw(amount);
    }
    return false;
}
bool TrustAccount::deposit(double amount) {
    if (amount >= 5000) {
        amount += depositBonus;
    }
    return Savings_Account::deposit(amount);
}
