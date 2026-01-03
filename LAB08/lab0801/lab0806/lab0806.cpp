#include <iostream>
#include <string>
using namespace std;

struct Student {
    //TODO 1) ???? field ?? struct Student ??????: studentID, nickname
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    // TODO 2) ??? pointer p ???????? s1
        // TODO: p = &s1;
    p = &s1;

    // TODO 3) ?????????????? p->
        // TODO: p->studentID = ...
        // TODO: p->nickname = ...
    p->studentID = "6812100022";
    p->nickname = "JAYDA";

    // TODO 4) ???????????? p->

    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}