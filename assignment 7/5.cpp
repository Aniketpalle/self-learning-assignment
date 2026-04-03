#include <iostream>
#include <map>
#include <fstream>
using namespace std;

class StudentRecord {
    map<int, string> students;

public:
    // 1. Add Record
    void addRecord() {
        int rollNo;
        string name;

        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        students[rollNo] = name;
        cout << "Record Added Successfully!\n";
    }

    // 2. Display Records
    void displayRecords() {
        if (students.empty()) {
            cout << "No records found!\n";
            return;
        }

        cout << "Student Records:\n";
        for (auto it : students) {
            cout << "Roll No: " << it.first 
                 << ", Name: " << it.second << endl;
        }
    }

    // 3. Save to File
    void saveToFile() {
        ofstream file("students.txt");

        for (auto it : students) {
            file << it.first << " " << it.second << endl;
        }

        file.close();
        cout << "Records saved to file successfully!\n";
    }
};

int main() {
    StudentRecord s;
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Add Record\n";
        cout << "2. Display Records\n";
        cout << "3. Save to File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.addRecord();
                break;
            case 2:
                s.displayRecords();
                break;
            case 3:
                s.saveToFile();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}