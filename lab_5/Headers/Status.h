#ifndef LAB4_STATUS_H
#define LAB4_STATUS_H

#include <string>
using namespace std;

class Status { //Поточний статус справи
    string status; //Поточний статус справи
public:
    Status(string newStatus) : status(newStatus){}
    string getStatus(); //Отримати поточний статус справи
    void setStatus(string newStatus); //Задати поточний статус справи
};


#endif //LAB4_STATUS_H
