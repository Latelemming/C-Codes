#include <iostream>

using namespace std;

int main()
{
    int length;
    int breadth;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    cout<< "Enter the length: " << endl;
    cin >> length;
    cout<<"Enter the breadth: " << endl;
    cin >> breadth;
    int area = length*breadth;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "The area of the rectangle with lenght " << length << "units and breadth " << breadth <<"units is:" << endl << area << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}
