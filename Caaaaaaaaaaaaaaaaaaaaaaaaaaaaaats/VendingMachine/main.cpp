#include <iostream>

using namespace std;

int main()
{
    double amount;
    int what; //"what is the option inputed
    int any;
    int b;
    int c;
    int malt = 10;
    int fanta = 6;
    int coke = 7;
    int sob = 3;
    cout << "Welcome to CSS Vending Machine" << endl;
    cout << "Enter the Amount you have: " << endl;
    cin >> amount;
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout<<"Enter The Drink you want to purchase: " << endl;
    cout<<"Enter 00 to cancel" << endl;
    cout<< "1. Malt - GHC 10"<<endl<<"2. Fanta - GHC 6" << endl<< "3. Coke - GHC 7" << endl<< "4. Sobolo - 3"<< endl;
    cin >> what;


    if(what==1){
        cout<<"You selected Malt"<<endl;
        cout<< "Enter the Amount you want ";
        cin>> any;
        b = malt*any;
        if (amount >= b){
            cout << "Your balance is: " << amount - b << endl;
        } else {
            cout<< "You Do Not have enough balance to Complete this Transanction" <<  endl;
        }
    }else if(what == 2){
        cout<<"You selected Fanta"<<endl;
        cout<< "Enter the Amount you want ";
        cin>> any;
        b = fanta*any;
        if (amount >= b){
                cout << "Your balance is: "<< amount - b << endl;

        }else{
            cout<<"You Do Not have enough balance to Complete this Transaction" << endl;
        }
    }else if(what==3){
        cout<<"You selected Coke"<<endl;
        cout<< "Enter the Amount you want ";
        cin>> any;
        b = coke*any;
        if (amount >= b){
            cout << "Your balance is: " << amount - b << endl;
        } else {
            cout<< "You Do Not have enough balance to Complete this Transanction" <<  endl;
        }
    }
        else if(what==4){
            cout<<"You selected Sobolo"<<endl;
        cout<< "Enter the Amount you want ";
        cin>> any;
        b = sob*any;
        if (amount >= b){
                cout << "Your balance is: " << amount - b << endl;
        } else{
            cout<< "You Do Not have enough balance to Complete this Transanction" <<  endl;
        }
        }else{cout<<"Invalid Input!"<< endl;}
        if(what == 0 || "Cancel" || "cancel" || "bye"||"exit"){
            return 0;
        }else{cout<<"Invalid Input"<<endl;}
        cout<<"---------------------------------------------------------------------------------------" <<endl;
        cout << "Thank You! :)" << endl;
    return 0;
}
