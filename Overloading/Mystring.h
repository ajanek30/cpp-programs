//
// Created by anton on 16.04.2026.
//

#ifndef CPP_PROGRAMS_MYSTRING_H
#define CPP_PROGRAMS_MYSTRING_H


class Mystring {
private:
    char *str;
public:
    Mystring();
    Mystring(const char *data);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    bool operator==(const Mystring &rhs) const;
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    ~Mystring();
    const char *getStr() const;
    int getStrLength() const;
    void display() const;

};


#endif //CPP_PROGRAMS_MYSTRING_H