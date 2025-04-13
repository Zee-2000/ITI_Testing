#include <iostream>
using namespace std;

int main() {
    int n;
    double average;

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Calculate average using the mathematical formula
    average = (n + 1) / 2.0;

    cout << "The average of numbers from 1 to " << n << " is: " << average << endl;

    return 0;
}
