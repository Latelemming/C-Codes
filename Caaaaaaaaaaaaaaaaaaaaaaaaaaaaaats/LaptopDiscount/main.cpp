#include <iostream>

using namespace std;

int main()
{   int H;
    int price = 5000;
    double d;
    double t;
    double here;
    while(true){
    cout<<"Please follow the prompt"<<endl<<"Enter" <<endl<<"1. If you're a student of UENR"<<endl<<"2. If you're a Lecturer of UENR" <<endl<<"3. If you're a Senior Staff of UENR"<<endl<<"4. Other"<< endl;
    cin >>H;
     /*switch(H){
     case 1:
         d=20;
         cout<<"1 here"<<endl;
         break;
     case 2:
        d=10;
        break;
     case 3:
        d=5;
        break;
     case 4:
        d=0;
        break;
     double here=d/100;*/
     if(H==1){
        d = 0.2;
     } else if(H==2){
        d = 0.1;
     } else if(H==3){
        d = 0.05;
     } else if(H==4){
        d = 0.0;
     } else{cout<<"Enter one of the numbers 1-4"<< endl;}

     t = price*d;
     here = price - t;
     cout<<"Your total becomes: "<< here<<endl;}
    return 0;
}
