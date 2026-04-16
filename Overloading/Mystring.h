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
    Mystring(const char *str);
    Mystring(const char &source);
    ~Mystring();

};


#endif //CPP_PROGRAMS_MYSTRING_H