#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
    // TODO: (???????????????) ???? postcode[6]

};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    // TODO:
    Address addr;
    Phone tel;
};

int main() {
    Student s1;

    // TODO 3) ???????????????????? 1 ?? (?????????? + ????????)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    // TODO 3) cin >>
    cin >> s1.addr.number;


    cout << "Address - Road: ";
    // TODO 3) cin >>
    cin >> s1.addr.road;

    cout << "Address - District: ";

    // TODO 3) cin >>
    cin >> s1.addr.district;
    cout << "Address - Province: ";
    // TODO 3) cin >> 
    cin >> s1.addr.province;

    cout << "Phone - Home: ";
    cin >> s1.tel.home;
    // TODO 3) cin >> 
    cout << "Phone - Mobile: ";
    cin >> s1.tel.mobile;
    // TODO 3) cin >> 

    cout << "\n===== Output =====\n";
    //// TODO 4): ??????????????????? (??? address ??? phone)
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Surname: " << s1.surname << endl;

    cout << "Address: " << s1.addr.number << ", " << s1.addr.road << ", " << s1.addr.district << ", " << s1.addr.province << ", " << endl;
    cout << "Phone - Home: " << s1.tel.home << endl;
    cout << "Phone - Mobile: " << s1.tel.mobile << endl;

    return 0;
}