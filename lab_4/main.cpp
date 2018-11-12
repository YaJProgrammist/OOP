#include <iostream>
#include <random>
#include "Headers/Firm.h"
using namespace std;

string convTime(int time){
    string res;
    if (time < 10){
        res += "0";
    }
    res += to_string(time);
    return res;
} //Привести число х < 10 до формату 0x, конвертувати число у рядок

string generateDate() { //Згенерувати рандомну дату
    random_device rd;
    int monthsLength[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    uniform_int_distribution<int> distMonth(1, 12);
    int month = distMonth(rd);
    uniform_int_distribution<int> distDay(1, monthsLength[month - 1]);
    int day = distDay(rd);
    return convTime(day) + "/" + convTime(month) + "/2018";
}

string generateTime() { //Згенерувати рандомний час
    random_device rd;
    uniform_int_distribution<int> dist60(0, 59), dist24(0, 23);
    int sec = dist60(rd), min = dist60(rd), hour = dist24(rd);
    return convTime(sec) + ":" + convTime(min) + ":" + convTime(hour);
}

int main() {
    //Масиви, з яких рандомно обираються для брокерів та клієнтів відповідні дані
    string names[] = {"Vanya", "Sonya", "Misha", "Olesya", "Katya", "Petya", "Sasha", "Nastya", "Gayane", "Julia",
                      "Kolya", "Dima", "Tyler", "Dan", "Chester", "Jared", "Dasha", "Vlada", "Rostik", "Masha",
                      "Vasya", "Mike", "Tonya", "Yana", "Denis", "Zhenya", "Fedya", "Vera", "Nadya", "Pasha"};
    string addresses[] = {"Kiev, KPI", "Kherson", "Kharkov", "Odessa", "Los Angeles", "Amsterdam", "New York City"};
    string statuses[] = {"inProcess", "waitForInspection", "ClientFounded", "ReadyForContract"};
    string emails[] = {"misha@gmail.com", "kek@gmail.com", "lenskaya.ekaterina@gmail.com", "wilsa@gmail.com",
                       "pushkin@gmail.com", "druzhko@mail.ru", "dimasik@gmail.com", "kisa@gmail.com"};
    string numbers[] = {"0984765298", "0958276498", "0961936482", "0974929565", "0934920566", "0994920664",
                        "0945978365", "0915945694", "0984567291", "0928830576", "0959927530", "0947593058"};

    random_device rd;
    uniform_int_distribution<int> distNames(0, 29), distAddress(0, 6), distStatus(0, 3), distEmail(0, 7),
    distNumber(0, 11), distDeals(1, 100), distArea(100, 3000), distRooms(1, 5), distMonth(1, 12);

    Firm coolFirm;

    //Згенерувати 5 брокерів:
    for (int i = 0; i < 5; i++) {
        int numOfDeals = distDeals(rd);
        uniform_int_distribution<int> distSuccess(0, numOfDeals);
        coolFirm.addBroker({names[distNames(rd)], numOfDeals, distSuccess(rd)});
    }

    //Згенерувати 5 клієнтів:
    for (int i = 0; i < 5; i++) {
        coolFirm.addClient(
                {coolFirm.getFreeBroker(), {names[distNames(rd)]}, {distArea(rd), distRooms(rd),
                 addresses[distAddress(rd)]}, {statuses[distStatus(rd)]}, {emails[distEmail(rd)]},
                 {numbers[distNumber(rd)]}, {generateDate(), generateTime()}, {generateDate()}});

    }

    //Вивести результати всіх брокерів:
    coolFirm.printBrokersResults();
}