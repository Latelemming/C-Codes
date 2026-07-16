#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"A Dividend (bigger number)" << endl;
    cin >> a;
    cout << "B Divisor (smaller number)" << endl;
    cin >> b;
    float rem = a%b; //modulo operation
    cout<< "Dividend=Divisor x Quotient + Remainder"<< endl;
    cout << "-----------------------------------------"<< endl;
    cout <<a<< "="<<b<<"("<< a/b <<")"<<"+"<<rem<< endl;
    while (rem != 0){ //when rem is not 0
        a=b;
        b=rem;
        rem = a%b;
        cout <<a<< "="<<b<<"("<< a/b <<")"<<"+"<<rem<< endl;
        }
    return 0;
}
