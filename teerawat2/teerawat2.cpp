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

int main() {
    const int N = 5; // Number of students
    string name[N], id[N];
    double score[N];
    char grade[N];

    // Input Phase
    for (int i = 0; i < N; i++) {
        cout << "--- Entry for Student " << (i + 1) << " ---" << endl;
        cout << "Enter Student name : ";
        getline(cin >> ws, name[i]); // ws skips leading whitespace
        cout << "Enter Student id   : ";
        cin >> id[i];
        cout << "Enter Student score: ";
        cin >> score[i];

        // Calculate the grade immediately after input
        calculateGrade(score[i], grade[i]);
    }

    // Output Phase
    cout << "\n\n--- DISPLAYING ALL RECORDS ---" << endl;
    for (int i = 0; i < N; i++) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    return 0;
}