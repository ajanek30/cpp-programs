
#include <cstring>
#include "Mystring.h"

#include <iostream>

Mystring::Mystring() : str{nullptr}{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *data) : str{nullptr} {
    if (data == nullptr) {
        str = new char[1];
        *str = '\0';
    }else {
        str = new char[strlen(data) + 1];
        strcpy(str, data);
    }

}

//deep copy constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}{

    str = new char[std::strlen(source.str) + 1];
    strcpy(str, source.str);
    std::cout << "Copy deep" << std::endl;
}

//deep move constructor
Mystring::Mystring(Mystring &&source) : str(source.str) {
    source.str = nullptr;
    std::cout << "Move deep" << std::endl;
}

//copy assignment operator
Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs) {
        return *this;
    }
    std::cout << "Copy assignment" << std::endl;
    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

//move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    std::cout << "move assignment" << std::endl;
    delete[] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//output operator overloaded
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}
//input operator overloaded
std::istream &operator>>(std::istream &is, Mystring &rhs) {
    char buff[1000];
    is >> buff;
    rhs = Mystring(buff);
    return is;
}
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return strcmp(lhs.str, rhs.str) == 0;
}
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return strcmp(lhs.str,rhs.str) != 0;
}
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
Mystring operator-(const Mystring &lhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(lhs.str) + 1];
    size_t len = std::strlen(lhs.str);
    std::strcpy(buff, lhs.str);
    for (size_t i = 0 ; i < len ; i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
Mystring &operator+=(Mystring &lhs,const Mystring &rhs){
    lhs = lhs + rhs;
    return lhs;
}
Mystring operator*(const Mystring &lhs, int n) {
    if (n <= 0) return Mystring{};
    char *buff = new char[(std::strlen(lhs.str)) * n + 1];
    std::strcpy(buff, lhs.str);
    size_t len = std::strlen(lhs.str);
    for (size_t i = 1 ; i < n ; i++) {
        std::strcat(buff, lhs.str);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring &operator*=(Mystring &lhs,int n) {
    lhs = lhs * n;
    return lhs;
}
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return strcmp(lhs.str, rhs.str) < 0;
}
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return strcmp(lhs.str, rhs.str) > 0;
}
Mystring &operator++(Mystring &lhs) {
    size_t len = std::strlen(lhs.str);
    for (size_t i = 0 ; i < len ; i++) {
        lhs.str[i] = std::toupper(lhs.str[i]);
    }
    return lhs;
}
Mystring &operator--(Mystring &lhs) {
    size_t len = std::strlen(lhs.str);
    for (size_t i = 0 ; i < len ; i++) {
        lhs.str[i] = std::tolower(lhs.str[i]);
    }
    return lhs;
}
Mystring operator++(Mystring &lhs,int) {
    Mystring temp{lhs};
    operator++(lhs);
    return temp;
}
Mystring operator--(Mystring &lhs,int) {
    Mystring temp{lhs};
    operator--(lhs);
    return temp;
}
//getters setters
const char *Mystring::getStr() const{
    return str;
}
int Mystring::getStrLength() const {
    return strlen(str);
}
void Mystring::display() const {
    for (int i = 0 ; str[i] != '\0' ; i++) {
        std::cout << str[i] << std::endl;
    }
}

//destructor
Mystring::~Mystring() {
    if(str != nullptr) {
        delete[] str;
    }
}
