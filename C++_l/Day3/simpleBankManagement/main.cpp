#include <iostream>
#include <string>
using namespace std;

struct Employee {
private:
    int id;
    string name;
    string phoneNumber;
    string email;

public:
    // Constructor with just id
    Employee(int empId) : id(empId), name(""), phoneNumber(""), email("") {}

    // Constructor with id and name
    Employee(int empId, const string& empName)
        : id(empId), name(empName), phoneNumber(""), email("") {}

    // Setter methods
    void setPhoneNumber(const string& phone) {
        phoneNumber = phone;
    }

    void setEmail(const string& empEmail) {
        email = empEmail;
    }

    // Display employee information
    void displayInfo() const {
        cout << "Employee Information:\n";
        cout << "ID: " << id << "\n";
        cout << "Name: " << (name.empty() ? "[Not provided]" : name) << "\n";
        cout << "Phone: " << (phoneNumber.empty() ? "[Not provided]" : phoneNumber) << "\n";
        cout << "Email: " << (email.empty() ? "[Not provided]" : email) << "\n";
    }
};
/*Bank Account struct model:
bank account =>[accNumber, holderName, balance, withdraw(function that takes money from the balance)] (Private)
1- Constructor for accNumber only (Public)
Bank Account(double accountNumber) : accNumber(accountNumber) , holdername "" , balance
2- Constructor for accNumber and holderName
Bank Account(double accountNumber, string& getname()) : accNumber(accountNumber) , name(holderName) , balance
withdraw function(amount)
{
cash;
for(i = 0; i <= balance.length; i++)
{
if(amount < balabce)
{
  cash = balance - amount
}
else
{
    print no cash is available
}
}
}

*/


int main() {
    // Example usage
    Employee emp1(1001);
    emp1.setPhoneNumber("555-123-4567");
    emp1.setEmail("john.doe@company.com");
    emp1.displayInfo();

    cout << "\n";

    Employee emp2(1002, "Jane Smith");
    emp2.setEmail("jane.smith@company.com");
    emp2.displayInfo();

    return 0;
}
