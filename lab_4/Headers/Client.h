#ifndef LAB4_CLIENT_H
#define LAB4_CLIENT_H

#include "Broker.h"
using namespace std;

template<class... Infos>
class Client : public Infos... { //Клієнт
public:
    Client(const Infos&&... infos) : Infos(infos)... {
        openDeal(); //Відкрити справу створеного клієнта
    }
};

#endif //LAB4_CLIENT_H
