#ifndef LAB4_DATEOFCONTRACT_H
#define LAB4_DATEOFCONTRACT_H

#include <string>
using namespace std;

class DateOfContract { //Дата заключення договору
    string date; //Дата заключення договору
public:
    DateOfContract(string newDate) : date(newDate){}
    string getContrDate(); //Отримати дату заключення договору
};


#endif //LAB4_DATEOFCONTRACT_H
