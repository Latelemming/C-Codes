#include <iostream>
#include <cmath>

using namespace std;

int add2Num(int, int);

int name(string a, int b){
    cout<<a<<" "<<b<<endl;
}


int main()
{
    string ban;
    int san;
    cout<<"Ban "; cin>>ban;
    cout<<"San "; cin>>san;
    name(ban, san);

    /*
    int black;
    int cat;
    cin>>black;
    cin>>cat;

    cout <<"The sum is "<<add2Num(black,cat)<<endl;*/
    return 0;
}

add2Num(int a, int b){
    int sum = a+b;
    return sum;
}





 /*cout<<"The square root of 16 is " << sqrt(16)<<endl;
    cout<<"2 exponent 3 is "<<pow(2,3)<<endl;
    cout <<"120 modulo 7 is " << fmod(120, 7)<<endl;
    */
