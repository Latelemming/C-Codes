#include <iostream>

using namespace std;

int main()
{
    int mark;
    while (true){
    cout << "-----------------------------------------------------------"<<endl;
    cout << "-----------------------------------------------------------"<<endl;
    cout << "What was your mark in the Exams. Enter 00 To quit program!"<< endl;
    cout << "-----------------------------------------------------------"<<endl;
    cin>> mark;
    cout << "###########################################################"<<endl;
    if(mark == 00){
            cout<<"Why even bother checking?"<<endl;
        return 0;}
    else if(mark<45){
        cout << "Bro! You had less than 45? You FAILED man!"<<endl<<"F"<<endl;
    }
    else if(mark<60){
        cout << "I guess you passed...Bearly!"<<endl<<"B"<<endl;
    }
    else if(mark<80){
        cout<<"Good"<<endl<<"B"<<endl;
    }
    else if(mark<99){
        cout<<"Wow!"<<endl<<"A"<<endl;
    }
    else if(mark == 100){
        cout<<"You sure you had a hundred?"<<endl<<"A"<<endl;
    }

    else{cout<<"Those aren't your marks!"<<endl;}

}
return 0;
}
