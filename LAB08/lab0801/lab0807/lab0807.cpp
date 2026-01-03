#include <iostream>
#include <string>
using namespace std;

// ????????????????????????????
struct Phone {
    string mobile;
    string home;
};

// ????????????????????????
struct Parent {
    string name;
    string relationship;
    Phone contact;
};

// ???????????????????????
struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

int main() {
    Student student;

    // ???????????????????
    student.id = "6812100022";
    student.nickname = "JAYDA";
    student.lineId = "jayda_168.";

    // ???????????????????????
    student.myContact.mobile = "0945544810";
    student.myContact.home = "027778888";

    // ???????????????
    student.myParent.name = "Wasan";
    student.myParent.relationship = "Father";

    // ?????????????????????
    student.myParent.contact.mobile = "0953727707";
    student.myParent.contact.home = "026669999";

    // ??????
    cout << "Student Information" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Nickname: " << student.nickname << endl;
    cout << "Line ID: " << student.lineId << endl;

    cout << "\nStudent Contact" << endl;
    cout << "Mobile: " << student.myContact.mobile << endl;
    cout << "Home: " << student.myContact.home << endl;

    cout << "\nParent Information" << endl;
    cout << "Name: " << student.myParent.name << endl;
    cout << "Relationship: " << student.myParent.relationship << endl;

    cout << "\nParent Contact" << endl;
    cout << "Mobile: " << student.myParent.contact.mobile << endl;
    cout << "Home: " << student.myParent.contact.home << endl;

    return 0;
}