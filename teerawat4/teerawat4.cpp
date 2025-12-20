#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to display formatted student data
void displayStudentInfo(string name, string id, double score, char grade) {
    cout << "\n---------------------------" << endl;
    cout << "Student Name : " << name << "\n";
    cout << "Student ID   : " << id << "\n";
    cout << "Score        : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade        : " << grade << "\n";
    cout << "---------------------------" << endl;
}

// Function to determine grade based on score (Pass-by-reference)
void calculateGrade(double score, char& grade) {
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}
int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // ??????? newline ???? getline

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // TODO: ??????????? size ??
    for (int i = 0; i < size; i++)
    {
        cout << "-------------------------\n";
        cout << "Enter Student name : ";
        getline(cin, name[i]);
        cout << "Enter Student id   : ";
        cin >> id[i];
        cout << "Enter Student score: ";
        cin >> score[i];
		cin.ignore(); // ??????? newline ???? getline
    
        // TODO: calculateGrade(score[i], grade[i]);
		calculateGrade(score[i], grade[i]);

	}

    // TODO: ???????? size ?? ???? displayStudentInfo
    for (int i = 0; i < size; i++)
    {
        cout << "----------------------\n";
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
	}

    // TODO: delete[] ???????????????
	delete[] name;
	delete[] id;
	delete[] score;
    delete[] grade;
	return 0;
}
