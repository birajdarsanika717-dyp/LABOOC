#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basicSalary;

public:
    Employee(int i, string n, float salary) {
        id = i;
        name = n;
        basicSalary = salary;
    }

    void displayDetails() {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: Rs. " << basicSalary << endl;
    }

    float getSalary() {
        return basicSalary;
    }

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    virtual void displaySalary() = 0;

    virtual ~Employee() {
        cout << "\nEmployee object destroyed." << endl;
    }
};

class Salary : public Employee {
private:
    float hra;
    float da;

public:
    Salary(int i, string n, float salary, float h, float d)
        : Employee(i, n, salary) {
        hra = h;
        da = d;
    }

    float calculateSalary() {
        return getSalary() + hra + da;
    }

    float calculateSalary(float bonus) {
        return getSalary() + hra + da + bonus;
    }

    void displaySalary() override {
        displayDetails();

        cout << "HRA: Rs. " << hra << endl;
        cout << "DA: Rs. " << da << endl;
        cout << "Gross Salary: Rs. " << calculateSalary() << endl;
    }

    void displaySalary(float bonus) {
        displaySalary();

        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Salary with Bonus: Rs. "
             << calculateSalary(bonus) << endl;
    }

    friend void saveToFile(Salary& emp, float bonus);
};

void saveToFile(Salary& emp, float bonus) {
    ofstream file("employee.txt", ios::app);

    if (file.is_open()) {
        file << "Employee ID: " << emp.getId() << endl;
        file << "Employee Name: " << emp.getName() << endl;
        file << "Basic Salary: Rs. " << emp.getSalary() << endl;
        file << "HRA: Rs. " << emp.hra << endl;
        file << "DA: Rs. " << emp.da << endl;
        file << "Bonus: Rs. " << bonus << endl;

        file << "Total Salary: Rs. "
             << emp.calculateSalary(bonus) << endl;

        file << "------------------------" << endl;

        file.close();

        cout << "\nData saved successfully!" << endl;
    }
    else {
        cout << "\nFile could not be opened." << endl;
    }
}

int main() {
    int id;
    string name;
    float basic, hra, da, bonus;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    cout << "Enter Bonus: ";
    cin >> bonus;

    Salary emp(id, name, basic, hra, da);

    cout << "\n----- Employee Salary Details -----";
    emp.displaySalary();

    cout << "\n----- Salary With Bonus -----";
    emp.displaySalary(bonus);

    saveToFile(emp, bonus);

    ifstream file("employee.txt");
    string line;

    cout << "\n----- Saved Employee Records -----" << endl;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
    else {
        cout << "File could not be opened." << endl;
    }

    return 0;
}