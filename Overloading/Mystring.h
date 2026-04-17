//
// Created by anton on 16.04.2026.
//

#ifndef CPP_PROGRAMS_MYSTRING_H
#define CPP_PROGRAMS_MYSTRING_H
#include <iostream>


class Mystring {


    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
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

    //overloading to do
    // ++(pre-inremenet),++(post-increment),--(pre),--(post)
    bool operator==(const Mystring &rhs) const; // == operator
    Mystring operator-() const ; // -(make lowercase) operator
    Mystring operator+(const Mystring &rhs) const; // +(concatenate) operator
    bool operator!=(const Mystring &rhs) const; // != operator
    bool operator>(const Mystring &rhs) const; // > operator
    bool operator<(const Mystring &rhs) const; // < operator
    Mystring &operator+=(const Mystring &rhs); // += operator
    Mystring &operator*=(const int n); // *= operator
    Mystring operator*(const int n) const; // *operator
    Mystring &operator++(); //++ uppercase operator
    Mystring &operator--(); //-- lowercase operator
    Mystring operator++(int); //post++ uppercase operator
    Mystring operator--(int); //post-- lowercase operator


    const char *getStr() const;
    int getStrLength() const;
    void display() const;

};


#endif //CPP_PROGRAMS_MYSTRING_H