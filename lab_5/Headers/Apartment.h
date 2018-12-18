#ifndef LAB4_APARTMENT_H
#define LAB4_APARTMENT_H

#include <string>
using namespace std;

class Apartment { //Квартира
    int area, rooms; //Площа та к-сть кімнат у квартирі
    string address; //Адреса квартири
public:
    Apartment(int newArea, int newRooms, string newAddress) : area(newArea), rooms(newRooms), address(newAddress){}
    int getArea(); //Отрмати площу квартири
    int getRooms(); //Отримати к-сть кімнат у квартирі
    string getAddress();  //Отримати адресу квартири
};


#endif //LAB4_APARTMENT_H
