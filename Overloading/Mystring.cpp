
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
