//
// Created by anton on 19.04.2026.
//

#ifndef CPP_PROGRAMS_CHECKINGACCOUNT_H
#define CPP_PROGRAMS_CHECKINGACCOUNT_H
#include "Account.h"


class CheckingAccount : public Account {
    friend std::ostream &operator<<(std::ostream &os,const CheckingAccount &acc);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_flatFee = 1.5;
protected:
    double flatFee;
public:
    CheckingAccount(const std::string &name = def_name,double balance = def_balance, double flatFee = def_flatFee);
    bool withdraw(double amount);
    bool deposit(double amount);
    ~CheckingAccount() = default;
};


#endif //CPP_PROGRAMS_CHECKINGACCOUNT_H