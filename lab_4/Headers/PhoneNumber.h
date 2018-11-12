#ifndef LAB4_PHONENUMBER_H
#define LAB4_PHONENUMBER_H

#include <string>
using namespace std;

class PhoneNumber { //Номер телефону
    string phoneNumber; //Номер телефону
public:
    PhoneNumber(string newPhoneNumber) : phoneNumber(newPhoneNumber){}
    string getPhoneNumber(); //Отримати номер телефону
};


#endif //LAB4_PHONENUMBER_H
