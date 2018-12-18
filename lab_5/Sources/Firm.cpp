#include "../Headers/Firm.h"

void Firm::addBroker(Broker newBroker) {
    brokers.push_back(newBroker);
}

void Firm::addClient(Client newClient) {
    clients.push_back(newClient);
}

Broker Firm::getBroker(string brName) {
    for (int i = 0; i < (int)brokers.size(); i++) {
        if (brName == brokers[i].getBrokerName()) {
            return brokers[i];
        }
    }
    Broker newBroker({brName});
    brokers.push_back(newBroker);
    return newBroker;
}

Broker Firm::getFreeBroker() {
    int minDeals = brokers[0].getNumOfCurDeals(), res = 0;
    for (int i = 1; i < (int)brokers.size(); i++) {
        int curDeals = brokers[i].getNumOfCurDeals();
        if (curDeals < minDeals) {
            minDeals = curDeals;
            res = i;
        }
    }
    return brokers[res];
}

void Firm::printBrokersResults() {
    cout << "Brokers:" << endl << endl;
    for (int i = 0; i < (int)brokers.size(); i++) {
        brokers[i].printBrokerResults();
        cout << "--------------------" << endl;
    }
}