#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineid;
    string phone;
};

int main() {
    Student s1; // ??????????????? struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    cout << "Enter ID: ";
    cin >> s1.id;
    cout << "Enter Nickname: ";
    cin >> s1.nickname;
    cout << "Enter Line ID: ";
    cin >> s1.lineid;
    cout << "Enter Phone: ";
    cin >> s1.phone;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineid << endl;
    cout << "Phone: " << s1.phone << endl;

    return 0;
}