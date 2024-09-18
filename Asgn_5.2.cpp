#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    const int rollNo;
    static int generate_roll_no;
    char gender;
    double marks[3];
    double percentage;

public:
    // Constructor
    Student() : rollNo(++generate_roll_no) {
        this->name = "NA";
        this->gender = 'M';
        this->marks[0] = 0;
        this->marks[1] = 0;
        this->marks[2] = 0;
        this->percentage = 0;
    }

    // Menu Function
    int menu() {
        cout << "Welcome to Student Management System" << endl;
        cout << "1. Enter Student Data" << endl;
        cout << "2. View Students Data" << endl;
        cout << "3. Find Student by Name" << endl;
        cout << "4. Exit" << endl << endl;
        
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        return ch;
    }

    // Accept Student Data
    void acceptStudent() {
        cout << "Enter Student's Data: " << endl;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Gender: ";
        cin >> gender;

        for (int i = 0; i < 3; i++) {
            cout << "Enter Marks for Subject " << i + 1 << " (out of 100): ";
            cin >> marks[i];
        }

        cout << endl << endl;
    }

    // Display Student Data
    void displayStudent() {
        this->percentage = ((marks[0] + marks[1] + marks[2]) / 300) * 100;

        cout << "Name: " << this->name << endl;
        cout << "Roll No: " << this->rollNo << endl;
        cout << "Gender: " << this->gender << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Marks for Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Percentage: " << this->percentage << "%" << endl;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

// Static Variable Definition
int Student::generate_roll_no = 1219;

// Search Student by Name
int findStudent(Student *ptr, int index) {
    string nameToSearch;
    cout << "Enter name of the student you want to search: ";
    cin >> nameToSearch;

    for (int i = 0; i < index; i++) {
        if (ptr[i].getName() == nameToSearch) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    cout << "How many students data you want to enter: ";
    int inp;
    cin >> inp;
    int cnt = 0;
    Student *ptr = new Student[inp];

    int ch;
    while ((ch = ptr[0].menu()) != 4) {
        if (ch == 1) {
            for (int i = 0; i < inp; i++) {
                ptr[i].acceptStudent();
                cnt++;
            }
        } else if (ch == 2) {
            cout << endl << endl;
            for (int i = 0; i < cnt; i++) {
                ptr[i].displayStudent();
                cout << endl << endl;
            }
        } else if (ch == 3) {
            int foundIndex = findStudent(ptr, cnt);
            if (foundIndex != -1) {
                cout << "Student found:" << endl;
                ptr[foundIndex].displayStudent();
            } else {
                cout << "Student not found!" << endl;
            }
            cout << endl << endl;
        } else if (ch < 1 || ch > 4) {
            cout << "Enter Valid Choice" << endl << endl;
            for (int i = 0; i < 20; i++)
                cout << "---";
            cout << endl << endl;
        }
    }

    delete[] ptr;
    ptr = NULL;

    return 0;
}

