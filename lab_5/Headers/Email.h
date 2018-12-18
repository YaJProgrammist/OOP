#ifndef LAB4_EMAIL_H
#define LAB4_EMAIL_H

#include <string>
using namespace std;

class Email { //Адреса електронної пошти
    string email; //Адреса електронної пошти
public:
    Email(string newEmail) : email(newEmail){}
    string getEmail(); //Отримати адресу електронної пошти
};


#endif //LAB4_EMAIL_H
