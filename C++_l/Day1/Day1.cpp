#include <iostream>
using namespace std;
int main()
{
//Write a program that gets a  number from user

int x;
cout << "Enter your number :" << endl;
cin >> x;
cout << "The number you put is " << x<< endl;

//Write a program that get characters from users

char z;
cout << "Enter your first letter :" << endl;
cin >> z;
cout << "Your letter is : " << z << endl;

//Write a program that gets two numbers, operations and print the result
//switch case and add operations
int a;
int b;
int result;
char op;
cout << "Enter number 1 :" << endl;
cin >> a;
cout << "Enter number 2 :" << endl;
cin >> b;
cin >> op;
switch (op)
{
    case'+':
    result =  a + b;
    cout << "The sum of both numbers is :" << result<< endl;
    break;

    case '-':
    result = a - b;
    cout << "The reminder of both numbers is :" << result << endl;
    break;

    case '*':
    result = a * b;
    cout << "The product of both numbers is :" << result<< endl;
    break;

    case '/':

    result = a / b;
    cout << "The quotient of both numbers is :" << result << endl;
    break;

    case '%':
    result = a % b;
    cout << "The modulous of both numbers is :" << result << endl;
    break;
    default:
    cout << "Invalid Operators"<<endl;
}






// Write Cpp program that prompts the user and check if its even or odd
int r;
cout << "Plz Enter your number" << endl;
cin >> r;
if(r % 2 == 0)
{
cout << "The number is even" << endl;
}
else
{
cout << "The result is odd" << endl;
}

//Write a Cpp program that user enter grade and check A,B,C,D,E
int m;
cout << "Enter your grade" << endl;
cin >> m;
if (m > 90 && m <= 100)
{
cout << "Your grade is A" << endl;
}

 else if (m > 80 && m <= 90)
{
cout << "Your grade is B" << endl;
}

 else if (m > 70 && m <= 80)
{
cout << "Your grade is C" << endl;
}
 else if (m > 60 && m <= 70)
{
cout << "Your grade is D" << endl;
}
 else
{
cout << "Your grade is E" << endl;
}

// Write a Cpp program that gets two numbers  of user and print the maximum

int c;
int d;

cout << "Enter number 1 :" << endl;
cin >> c;
cout << "Enter number 2 :" << endl;
cin >> d;

if( c < d )
{
cout << d << endl;

}
else if (d < c)
{
    cout << c << endl;
}
else if (c == d)
{
cout << "Both of them are equal"<< endl;
}
else
{
cout << "Error occured plz try again later"<< endl;
}
// Write a program that prompts the user to input a series of integers till the user writes 0
int number;
int  sum  = 0;
cout<<"Enter User number"<< endl;
cin >> number;
while(number != 0)
{
sum += number;
cin >> number;
}
cout<<sum<<endl;
}

