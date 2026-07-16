#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number whose Factors you want to know: "<<endl;
    cin>>num;
    cout<<"------------------------------------------------"<<endl;
    cout<<"The factors are: "<<endl;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i;
            if(i!=num){
                cout<<", ";
            }else{cout<<".";}
        }
    }
    cout<<endl<<"------------------------------------------------"<<endl;

    return 0;
}
