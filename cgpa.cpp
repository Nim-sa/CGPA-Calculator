#include <iostream>
using namespace std;
void calculateGPA();
void calculateCGPA();
void showF();
void showMenu();

int main() {
    showMenu();
    return 0;
}

void showMenu() {
    int choice;
    while (true) {
        cout << "------------------(`w`)-----------------" << endl;
        cout << "----------------------------------------" << endl;
        cout << "       GPA & CGPA Calculator" << endl;
        cout << "----------------------------------------" << endl;
        cout << "1. Calculate GPA (Grade Point Average)" << endl;
        cout << "2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
        cout << "3. Method of Calculation" << endl;
        cout << "4. Exit" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateGPA();
                break;
            case 2:
                calculateCGPA();
                break;
            case 3:
                showF();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}

void calculateGPA() {
    int numSubjects;
    float credit, point, totalPoints = 0, totalCredits = 0;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter credit for subject " << i + 1 << ": ";
        cin >> credit;
        cout << "Enter grade point for subject " << i + 1 << ": ";
        cin >> point;
        totalPoints += credit * point;
        totalCredits += credit;
    }

    if (totalCredits != 0) {
        cout << "Your GPA is: " << totalPoints / totalCredits << endl;
    } else {
        cout << "Total credits cannot be zero." << endl;
    }
}

void calculateCGPA() {
    int numSemesters;
    float gpa, totalGPA = 0;

    cout << "Enter the number of semesters: ";
    cin >> numSemesters;

    for (int i = 0; i < numSemesters; ++i) {
        cout << "Enter GPA for semester " << i + 1 << ": ";
        cin >> gpa;
        totalGPA += gpa;
    }

    if (numSemesters != 0) {
        cout << "Your CGPA is: " << totalGPA / numSemesters << endl;
    } else {
        cout << "Number of semesters cannot be zero." << endl;
    }
}

void showF() {
    cout << "Method of Calculating GPA & CGPA:" << endl;
    cout << "GPA = Sum of (Credit * Point) / Total Credits" << endl;
    cout << "CGPA = Sum of GPA / Number of Semesters" << endl;
}
