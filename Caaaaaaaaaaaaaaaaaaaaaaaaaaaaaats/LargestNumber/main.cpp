#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cout<<"Enter the first number: " << endl; cin >> num1;
    cout<<"Enter the Second number: " << endl; cin >> num2;
    cout<<"Enter the Third number: " << endl; cin >> num3;
    if(num2>num1&&num2>num3){
        cout<< "The second number is bigger"<< endl;
    }else if(num1>num2&&num1>num3){
    cout<< "The first number is bigger"<<endl;
    }else if(num3>num1&&num3>num2){
        cout <<"The last number is bigger"<<endl;
    }
    else{
        cout <<"Two or more numbers are the same"<<endl;
        if(num1==num2){
            cout<<"The first and second number are the same"<< endl;
        }else if(num2==num3){
            cout<<"The last and second number are the same"<<endl;
        }else if(num1==num3){
            cout<<"The first and last number are the same"<<endl;
        }
    }
    return 0;
}
