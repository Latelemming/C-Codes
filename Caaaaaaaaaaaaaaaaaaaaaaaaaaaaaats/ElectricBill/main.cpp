#include <iostream>

using namespace std;

int main()
{
    float elec;
    float times;
    float res;
    double yes;
    double yess;

    cout << "How much did you Buy?"<<endl;
    cin >> elec;

    if(elec<=100){
        times = 0.5;
        res = elec*times;
    }else if(elec>=200){
        times = 1.2;
        yes = elec-100;
        yess = yes-100;
        res =(yess*times)+(100*0.5)+(100*0.75);
    }else if(elec>100){
        times = 0.75;
        yes = elec-100;
        res = (yes*times)+(100*0.5);
    }
    cout <<"Your Electric Bill is: "<<res<<endl; return 0;
}
