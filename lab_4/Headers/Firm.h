#ifndef LAB4_FIRM_H
#define LAB4_FIRM_H

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "Broker.h"
#include "ClientName.h"
#include "Apartment.h"
#include "Status.h"
#include "Email.h"
#include "PhoneNumber.h"
#include "TimeOfInspection.h"
#include "DateOfContract.h"
#include "Client.h"

#define Client Client<Broker, ClientName, Apartment, Status, Email, PhoneNumber, TimeOfInspection, DateOfContract>

using namespace std;

class Firm { //Фірма
    vector<Broker> brokers; //Брокери, що працюють у фірмі
    vector<Client> clients; //Клієнти фірми
public:
    void addBroker(Broker newBroker); //Додати до фірми нового брокера
    void addClient(Client newClient); //Додати до фірми нового клієнта
    Broker getBroker(string brName); //Отримати брокера з поданим ім'ям
    Broker getFreeBroker(); //Отримати брокера, що має найменшу к-сть поточних справ
    void printBrokersResults(); //Вивести результати кожного брокера(к-сть доручених та успішно завершених справ)
};

#endif //LAB4_FIRM_H
