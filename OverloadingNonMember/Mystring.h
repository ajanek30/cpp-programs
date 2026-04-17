//
// Created by anton on 16.04.2026.
//

#ifndef CPP_PROGRAMS_MYSTRING_H
#define CPP_PROGRAMS_MYSTRING_H
#include <iostream>


class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &lhs);
    friend Mystring &operator+=(Mystring &lhs,Mystring &rhs);
    friend Mystring &operator*=(Mystring &lhs,int n);
    friend Mystring operator*(const Mystring &lhs,int n);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator++(Mystring &lhs);
    friend Mystring &operator--(Mystring &lhs);
    friend Mystring operator++(Mystring &lhs,int);
    friend Mystring operator--(Mystring &lhs,int);
    //FRIEND overloading just THERE
private:
    char *str;
public:
    Mystring();
    Mystring(const char *data);
    ~Mystring();

    Mystring(const Mystring &source); //copy constructor
    Mystring(Mystring &&source); //move constructor

    Mystring &operator=(const Mystring &rhs); //copy assignment
    Mystring &operator=(Mystring &&rhs); //move assignment


    const char *getStr() const;
    int getStrLength() const;
    void display() const;

};


#endif //CPP_PROGRAMS_MYSTRING_H