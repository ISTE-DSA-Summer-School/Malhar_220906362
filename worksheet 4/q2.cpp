#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    char grade;

public:
    void readStudentInfo() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter grade: ";
        cin >> grade;

        
    }

    void displayStudentInfo() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Grade: " << grade << endl;
    }

    static void sortByRollNumber(Student students[], int numStudents) {
        for (int i = 0; i < numStudents - 1; i++) {
            for (int j = 0; j < numStudents - i - 1; j++) {
                if (students[j].rollNumber > students[j + 1].rollNumber) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
    }
};

int main() {
    int numstudents;
    cout << "Enter number of students ";
    cin >> numstudents;
    Student students[numStudents];
  
    cout << "Enter student details:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].readStudentInfo();
    }

    
    cout << "\nOriginal student information:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudentInfo();
    }

    
    Student::sortByRollNumber(students, numStudents);

    
    cout << "\nSorted student information by roll number:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudentInfo();
    }

    return 0;
}
