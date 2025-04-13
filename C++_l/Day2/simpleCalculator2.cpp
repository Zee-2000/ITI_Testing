#include <iostream>
using namespace std;

// Function prototypes
void ShowMenu();
double GetFirstNumber();
double GetSecondNumber();
char GetOperation();
double DoProcessing(double num1, double num2, char op);
void ShowResult(double result);

int main() {
    double number1, number2, result;
    char operation;

    ShowMenu();
    number1 = GetFirstNumber();
    number2 = GetSecondNumber();
    operation = GetOperation();
    result = DoProcessing(number1, number2, operation);
    ShowResult(result);

    return 0;
}

void ShowMenu() {
    cout << "Simple Calculator Program" << endl;
    cout << "------------------------" << endl;
    cout << "Available operations: +, -, *, /" << endl << endl;
}

double GetFirstNumber() {
    double num;
    cout << "Enter first number: ";
    cin >> num;
    return num;
}

double GetSecondNumber() {
    double num;
    cout << "Enter second number: ";
    cin >> num;
    return num;
}

char GetOperation() {
    char op;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // Validate input
    while (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid operation. Please enter +, -, *, or /: ";
        cin >> op;
    }

    return op;
}

double DoProcessing(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return num1 / num2;
        default:
            return 0; // This shouldn't happen due to input validation
    }
}

void ShowResult(double result) {
    cout << "The result is: " << result << endl;
}
