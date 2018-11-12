#ifndef LAB4_TIMEOFINSPECTION_H
#define LAB4_TIMEOFINSPECTION_H

#include <string>
using namespace std;

class TimeOfInspection { //Дата та час перевірки квартири брокером
    string date, time; //Дата та час перевірки квартири брокером
public:
    TimeOfInspection(string newDate, string newTime) : date(newDate), time(newTime){}
    string getInspDate(); //Отримати дату перевірки квартири брокером
    string getInspTime(); //Отримати час перевірки квартири брокером
    string getInspFullTime(); //Отримати дату та час перевірки квартири брокером
};


#endif //LAB4_TIMEOFINSPECTION_H
