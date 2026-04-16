
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

Mystring::Mystring(const Mystring &source) : str{nullptr}{

    str = new char[std::strlen(source.str) + 1];
    strcpy(str, source.str);
    std::cout << "Copy deep" << std::endl;
}
Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;


}
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

Mystring::~Mystring() {
    if(str != nullptr) {
        delete[] str;
    }
}
