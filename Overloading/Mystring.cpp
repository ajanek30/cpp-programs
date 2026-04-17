
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
//overloading JUST HERE

bool Mystring::operator==(const Mystring &rhs) const {
    return strcmp(this->str, rhs.str) == 0;
}
bool Mystring::operator!=(const Mystring &rhs) const {
    return strcmp(this->str, rhs.str) != 0;
}
Mystring Mystring::operator-() const { //const tu mowi ze nie mozemy w tej funkcji ruszyc pol klasy w ktorej jestesmy
    char *buff = new char[strlen(str)+1];
    std::strcpy(buff, str);
    for (size_t i = 0 ; i < strlen(buff) ; i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
bool Mystring::operator>(const Mystring &rhs) const {
    return strcmp(this->str, rhs.str) > 0;
}
bool Mystring::operator<(const Mystring &rhs) const {
    return strcmp(this->str, rhs.str) < 0;
}
Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs;
    return *this;
}
Mystring &Mystring::operator*=(int n) {
    *this = *this * n;
    return *this;
}
Mystring Mystring::operator*(int n)  {
    char *buff = new char[(std::strlen(str))*n + 1];
    std::strcpy(buff, str);
    for (size_t i = 1 ; i < n ; i++) {
        std::strcat(buff, str);
    }
    Mystring temp{buff};
    delete[] buff;
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
