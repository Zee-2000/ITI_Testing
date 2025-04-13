#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    static int nextID;  // Static member to track next available ID
    int employeeID;
    string name;
    double salary;
    string department;

public:
    // Constructor
    Employee(string empName, double empSalary, string empDept)
        : name(empName), salary(empSalary), department(empDept) {
        employeeID = nextID++;
        cout << "Employee " << employeeID << " created." << endl;
    }

    // Copy constructor (Answer to point 4 & 5)
    Employee(const Employee &other)
        : name(other.name), salary(other.salary), department(other.department) {
        employeeID = nextID++;  // Assign a new ID to the copy
        cout << "Employee " << other.employeeID << " copied to new employee " << employeeID << endl;
    }

    // Destructor (Answer to point 3)
    ~Employee() {
        cout << "Employee " << employeeID << " (" << name << ") is being destroyed." << endl;
    }

    // Display method
    void displayInfo() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Department: " << department << endl;
        cout << "---------------------" << endl;
    }
};

// Initialize static member
int Employee::nextID = 1;

int main() {
    // Answer to point 2: Create and display two employees
    cout << "Creating original employees:" << endl;
    Employee emp1("John Doe", 75000.0, "Engineering");
    Employee emp2("Jane Smith", 82000.0, "Marketing");

    emp1.displayInfo();
    emp2.displayInfo();

    // Demonstrate copy constructor (Answer to point 4 & 5)
    cout << "\nDemonstrating copy constructor:" << endl;
    Employee emp3 = emp1;  // This invokes the copy constructor
    emp3.displayInfo();

    return 0;
}
