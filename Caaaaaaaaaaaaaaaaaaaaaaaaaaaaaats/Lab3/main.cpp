#include <iostream>

using namespace std;

float num1, num2, option,calc;
void num(){
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Enter The First Number"<< endl;cin >> num1; cout<<"Enter The Second Number"<<endl;cin>>num2;
    int option;
    cout << "Select operation:"<<endl<< "1. Addition" << endl<< "2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Exit"<<endl;
    cout<<"Enter The Options: "; cin>> option;
    cout<<"-----------------------------------------------------------"<<endl;
    switch (option){
        case 1:
            calc = num1+num2;
            cout<<num1<<"+" <<num2<<"="<<calc<< endl;
            break;
        case 2:
            calc = num1-num2;
            cout<<num1<<"-"<<num2<<"="<<calc<<endl;
            break;
        case 3:
            calc = num1*num2;
            cout<<num1<<"*"<<num2<<"="<<calc<<endl;
            break;
        case 4:
            if(num2 == 0){cout<<"'0' makes the equation Undefined"<<endl;}
            else{
            calc = num1/num2;
            cout<<num1<<"/"<<num2<<"="<< calc<<endl;}
            break;
    }


}
int main()
{
    num();
    if(num2 == 0&&option == 4){num();}
    do{
        num();
    }while(option<5&&option>0);
    if(option == 5){return 0;}else{num();}
}
