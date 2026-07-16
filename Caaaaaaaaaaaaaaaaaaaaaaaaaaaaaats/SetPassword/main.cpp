#include <iostream>
#include <cstdlib>

using namespace std;

string pass;
string code;

int password(){
    int att=1;
    string here1;
    string here2;
    while(att>0){
    cout<<"Enter the password"<<endl;
    cin >> here1;
    pass = here1;
    cout<<"Enter a second time"<<endl;
    cin>> here2;
    if(here1==here2){
        cout<<"GOOD"<<endl;
       att = att - 2;
       system("cls");
    }else{cout<<"They don't match"<<endl;}
    }
}


void him()
{
    password();
    bool atte = true;
    while(atte){
    cout<<"Enter the fucking password!"<<endl;
    cin >> code;
    if(code==pass){
        cout<<"YES!"<<endl;
        atte = false;
    }else{cout<<"EW NO! Try again!"<<endl;}
    }
}
