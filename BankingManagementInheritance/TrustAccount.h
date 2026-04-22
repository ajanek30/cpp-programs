//
// Created by anton on 20.04.2026.
//

#ifndef CPP_PROGRAMS_TRUSTACCOUNT_H
#define CPP_PROGRAMS_TRUSTACCOUNT_H
#include <iosfwd>

#include "Account.h"
#include "Savings_Account.h"


class TrustAccount : public Savings_Account{
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &obj);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_deposit_bonus = 50.0;
protected:
    double depositBonus;
    size_t withdrawCounter;
public:
    TrustAccount(const std::string &name = def_name, double balance = def_balance, double int_rate = def_int_rate,double depositBonus = def_deposit_bonus);
    ~TrustAccount() = default;
    bool withdraw20Checker(double amount) const;
    bool withdraw(double amount);
    bool deposit(double amount);
};


#endif //CPP_PROGRAMS_TRUSTACCOUNT_H