#include <iostream>

using namespace std;
/*
employee attributes (private):
=>emp_name
=>emp_id  for employee id
=>emp_salary
...................
1-Constructors
a - constructor for initializing the employee atrribute:
=> name = ""
=> emp_id = 0
=> emp_salary = 0
b - constructor to return id:
id = emp_id
name = ""
emp_salary = 0

c - constructor to return members:
(get the refernce of the members)
 emp_name = name
 id = emp_id

d - constructor for the salary(&salary)
emp_salary = salary

 2- Methods
void displayemployeeInfo(id, name, salary)
get id
get name
get salary

*/

struct Employee
{
    private:
    int emp_id;
    string emp_name;
    float emp_salary;
    public:
    ///initialize the attributes
    Employee() : emp_id(1), emp_name("unknown"), emp_salary(0) {}
    ///constructor for id:
    Employee(int id) : emp_id(id), emp_name("unknown"), emp_salary(0) {}
    ///constructor for id and name:
    Employee(int id, const string& name):
        emp_id(id), emp_name(name), emp_salary(0){}
    ///constructor for salary
    Employee(float salary) : emp_salary(salary) {}

    ///method for salary
    void setSalary(float salary)
    {
    emp_salary = salary;

    }

    ///display employeeinfo
    void displayemployeeInfo()
    {
    cout << "Employee Info"<<endl;
     cout << "Employee ID : "<<emp_id<<endl;
      cout << "Employee Name"<< emp_name<<endl;
       cout << "Employee Salary"<< emp_salary<<endl;

    }


};



int main()
{
    cout << "Hello world!" << endl;
    Employee emp1(1, "Samir");
    Employee emp2(2, "Zahwa");
    emp2.setSalary(1500.5f);
    emp1.setSalary(9000.6f);
    emp1.displayemployeeInfo();
    emp2.displayemployeeInfo();

    return 0;
}
