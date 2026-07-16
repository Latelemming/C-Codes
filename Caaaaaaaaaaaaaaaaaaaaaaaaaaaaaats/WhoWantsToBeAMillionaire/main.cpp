#include <iostream>
#include <string>

using namespace std;


bool Question(string question, string option_1, string option_2, string option_3, string option_4, char correct){
    int attempts = 2;
    char answer;

    while(attempts>0){
        cout<< question<<endl;
        cout<<"A. "<<option_1<<endl;
        cout<<"B. "<<option_2<<endl;
        cout<<"C. "<<option_3<<endl;
        cout<<"D. "<<option_4<<endl;
        cout<<"Enter your answer(A,B,C,D)"<<endl;
        cin>>answer;
        answer = toupper(answer);
    if(answer==correct){
            cout<<"Correct"<<endl;
            return true;
        }else{if(answer == correct){
            cout<<"correct"<<endl;
            return true;
        }else{ attempts --; cout<<"Wrong!"<<endl; return false;}
    }}
    }
}
int main()
{

    cout<<"-----Who wants to be a fucking millionaire!-----"<<endl;
    double money  = 0;
    bool correct;
    correct = Question("Question 1: What is 2+2", "3","4","5","6",'B');
    if(!correct){
        cout<<"Game over! You won $:"<< money<<endl;
        return 0;
    }
    money +=200;
    cout<<"You won $" <<money<<endl;

    return 0;
}
