#ifndef LAB4_BROKER_H
#define LAB4_BROKER_H

#include <string>
#include <memory>
#include <iostream>
using namespace std;

class Broker { //Брокер
    shared_ptr<string> name = make_shared<string>(); //Ім'я брокера
    shared_ptr<int> numOfDeals = make_shared<int>(), //К-сть доручених справ
            numOfSuccesses = make_shared<int>(), //К-сть успішно завершених справ
            numOfCurDeals = make_shared<int>(); //К-сть поточних справ
public:
    Broker(string newName, int curNumOfDeals = 0, int curNumOfSuccesses = 0);
    void openDeal(); //Відкрити нову справу
    void closeDeal(); //Закрити справу
    string getBrokerName(); //Отримати ім'я брокера
    int getNumOfDeals(); //Отримати к-сть доручених справ
    int getNumOfSuccesses(); //Отримати к-сть успішно завершених справ
    int getNumOfCurDeals(); //Отримати к-сть поточних справ
    void printBrokerResults(); //Вивести результати брокера(к-сть доручених та успішно завершених справ)
};

#endif //LAB4_BROKER_H
