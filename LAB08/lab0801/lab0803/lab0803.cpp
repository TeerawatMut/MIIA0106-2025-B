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

// TODO: ????????????????
void printStudent(Student s) {
    // TODO
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineid << endl;
    cout << "Phone: " << s.phone << endl;

}

int main() {
    Student s1;

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


    cout << "\n=== Output (from function) ===\n";
    // TODO: ????? printStudent
    printStudent(s1);

    return 0;
}