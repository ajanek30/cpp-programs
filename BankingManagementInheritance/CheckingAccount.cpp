//
// Created by anton on 19.04.2026.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name,double balance,double fee)
    : Account(name,balance) , flatFee(fee){
    std::cout << "CheckingAccount constructor executed" << std::endl;
}
std::ostream &operator<<(std::ostream &os,const CheckingAccount &acc)
{
    os << acc.name << " " << acc.balance << " " << acc.flatFee;
    return os;
}

bool CheckingAccount::withdraw(double amount) {
    amount -= flatFee;
    return Account::withdraw(amount);
}
bool CheckingAccount::deposit(double amount) {
    return Account::deposit(amount);
}
