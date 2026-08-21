#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int maths, physics, chemistry, programming;

public:
    void getData() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Maths Marks: ";
        cin >> maths;

        cout << "Enter Physics Marks: ";
        cin >> physics;

        cout << "Enter Chemistry Marks: ";
        cin >> chemistry;

        cout << "Enter Programming Marks: ";
        cin >> programming;
    }

    void displayMarksheet() {
        int total = maths + physics + chemistry + programming;
        float percentage = total / 4.0;

        cout << "\n====================================\n";
        cout << "          SEMESTER 1 MARKSHEET\n";
        cout << "====================================\n";

        cout << "Student Name : " << name << endl;
        cout << "Roll No      : " << rollNo << endl;

        cout << "------------------------------------\n";
        cout << "Subject          Marks\n";
        cout << "------------------------------------\n";
        cout << "Maths            " << maths << endl;
        cout << "Physics          " << physics << endl;
        cout << "Chemistry        " << chemistry << endl;
        cout << "Programming      " << programming << endl;
        cout << "------------------------------------\n";

        cout << "Total Marks      : " << total << "/400" << endl;
        cout << "Percentage       : " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result           : PASS" << endl;
        else
            cout << "Result           : FAIL" << endl;

        cout << "====================================\n";
    }
};

int main() {
    Student s;

    s.getData();
    s.displayMarksheet();

    return 0;
}