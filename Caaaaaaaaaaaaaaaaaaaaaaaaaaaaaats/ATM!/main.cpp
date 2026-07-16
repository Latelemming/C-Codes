#include <iostream>
#include <cstdlib>
using namespace std;
//Global variables
int option;
int password;
int add;
int money =100;
string pass;
string code;
//Used to set the Password first
void passord(){
    int att=1;
    string here1;
    string here2;
    while(att>0){
    cout<<"----Set a Password----"<<endl;
    cout<<"Enter the password"<<endl;
    cin >> here1;
    pass = here1;
    cout<<"Enter a second time"<<endl;
    cin>> here2;
    if(here1==here2){
        cout<<"GOOD"<<endl;
       att = att - 2;//Breaks the loop
       system("cls");//Clears the screen after
    }else{cout<<"They don't match"<<endl;}
    }
}
//Options menu
void what(){
    cout<<endl<<"What do you want?!"<<endl;
    cout<<"1. View Balance"<<endl<<"2. Deposit"<<endl<<"3. Withdraw"<<endl<<"0. Exit"<<endl;
    cin>>option;
    cout<<"---------------------"<<endl;
}
//What the options actually do
void here(){

    while(option!=0){
    if(option == 1){
        cout<<"Your money is: $"<<money<<endl; what();
    }else if(option ==2){
        cout<<"How much do you want to Deposit?"<<endl;
        cin >> add;
        money = money+add;
        cout<<"You now have: $"<< money<<endl;what();
    }else if(option == 3){
        cout<<"How much do you want to Withdraw?"<<endl;
        cin >>add;
        if(add> money){cout<<"Insufficient Balance"<<endl;
        cout << "You have: $"<< money<<" in your account"<< endl;
        }else{money = money -add; cout<<"You now have $"<<money <<" in your account"<<endl;}what();
    }else{cout<<"Wrong input, Try again"<<endl;what();}
    }
}
//Makes code compact
void thing(){
     what();here();
}
//MAIN!
int main(){
    //calls set password first
    passord();
    int atte = 3;
    //Allows access to ATM
    while(atte>0){
            atte-=1;
    cout<<"Enter the You set password!"<<endl;
    cin >> code;
    if(code==pass){
            cout<<"---------------------"<<endl;
        cout<<"Welcome"<<endl;
        cout<<"---------------------"<<endl;
        atte -=3;thing();//Breaks loop instantly and runs the compact thing
    }else{cout<<"Try again"<<endl<<"Attempts left: "<<endl;cout<<atte<<endl;}
    }//After 3 tries, breaks!
    cout<<"BYE!"<<endl;
    return 0;
}
