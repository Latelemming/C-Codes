#include <iostream>

using namespace std;

int main()
{
    cout << "--------------------------------------------------------" << endl;
    cout << "Name          :" << endl;
    cout << "Index number  :"<< endl;
    cout << "Class         :"<<endl;
    cout << "--------------------------------------------------------" <<endl;
    double num1;
    double num2;
    double num3;
    double num4;
    cout << "Enter the First number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the third number: " << endl;
    cin >> num3;
    cout << "Enter the fourth number" << endl;
    cin >> num4;
    int sum = num1+num2+num3+num4;
    int mul = num1*num2*num3*num4;
    int avg = sum/4;
    cout << "--------------------------------------------------------" <<endl;
    cout << "The sum of " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " is "<< sum << endl;
    cout << "The product of " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " is "<< mul << endl;
    cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " is "<< avg << endl;
    cout << "--------------------------------------------------------" <<endl;

}
