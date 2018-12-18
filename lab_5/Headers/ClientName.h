#ifndef LAB4_CLIENTNAME_H
#define LAB4_CLIENTNAME_H

#include <string>
using namespace std;

class ClientName { //Ім'я клієнта
    string name; //Ім'я клієнта
public:
    ClientName(string newName) : name(newName){}
    string getClientName(); //Отримати ім'я клієнта
};


#endif //LAB4_CLIENTNAME_H
