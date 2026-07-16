#include <iostream>

using namespace std;

int main()
{
    int mon;
    int wag;
    cout<<"Hours worked in a month"<<endl;cin >> mon;
    cout <<"Hourly wage"<<endl; cin >> wag;
    float gloss = mon*wag;
    float tax = gloss*(10/100);
    float net = gloss - tax;

    cout << "The net salary is "<< net<< endl;

    return 0;
}
