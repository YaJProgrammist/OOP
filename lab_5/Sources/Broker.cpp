#include "../Headers/Broker.h"

Broker::Broker(string newName, int curNumOfDeals, int curNumOfSuccesses) {
    *name = newName;
    *numOfDeals = curNumOfDeals;
    *numOfSuccesses = curNumOfSuccesses;
    *numOfCurDeals = curNumOfDeals - curNumOfSuccesses;
}

void Broker::openDeal() {
    (*numOfDeals)++;
    (*numOfCurDeals)++;
}

void Broker::closeDeal(){
    (*numOfSuccesses)++;
    (*numOfCurDeals)--;
}

void Broker::printBrokerResults() {
    cout << "Name: " << *name << endl;
    cout << "Number of deals: " << *numOfDeals << endl;
    cout << "Number of successful deals: " << *numOfSuccesses << endl;
}

string Broker::getBrokerName(){
    return *name;
}

int Broker::getNumOfDeals(){
    return *numOfDeals;
}

int Broker::getNumOfSuccesses(){
    return *numOfSuccesses;
}

int Broker::getNumOfCurDeals(){
    return *numOfCurDeals;
}
