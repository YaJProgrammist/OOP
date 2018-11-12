#include "../Headers/TimeOfInspection.h"

string TimeOfInspection::getInspDate() {
    return date;
}

string TimeOfInspection::getInspTime() {
    return time;
}
string TimeOfInspection::getInspFullTime() {
    return date + " " + time;
}