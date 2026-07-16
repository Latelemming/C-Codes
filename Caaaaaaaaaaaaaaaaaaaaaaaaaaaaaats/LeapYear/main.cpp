#include <iostream>

using namespace std;

int main()
{
    while(true){
    int year;
    cout << "Enter the Year"<<endl; cin >> year;
    if(year%4 == 0){
        cout<<"The year is a Leap Year."<<endl;
    }else{cout<< "The Year is Not a Leap Year"<<endl;}}
    return 0;
}
