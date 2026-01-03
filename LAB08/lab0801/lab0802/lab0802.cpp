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
    const int SIZE = 5;
    Student students[SIZE]; // Array ??? struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter ID: ";
        cin >> students[i].id;
        cout << "Enter Nickname: ";
        cin >> students[i].nickname;
        cout << "Enter Line ID: ";
        cin >> students[i].lineid;
        cout << "Enter Phone: ";
        cin >> students[i].phone;

        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
        cout << "Student " << (i + 1) << ":\n";
        cout << "ID: " << students[i].id << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << "Line ID: " << students[i].lineid << endl;
        cout << "Phone: " << students[i].phone << endl;
        cout << "----------------------\n";
    }

    return 0;
}