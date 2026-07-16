#include <iostream>

using namespace std;

long long fact(int n){

    long long fan = 1;
    for(int i=1; i<=n; i++){
        fan *= i;
    }
    return fan;
}

int main()
{
    int first;
    int second;

    cout<<"--------------nCr---------------"<<endl;
    cout<<"Enter n: "; cin>>first;
    cout<<"Enter r: "; cin>>second;
    long long comb = (fact(first))/((fact(second))*(fact(first-second)));
    long long perm = (fact(first))/(fact(first-second));
    cout<<"--------------------------------"<<endl;
    cout<<first<<" Combination "<<second<<" is: "<<comb<<endl;
    cout<<first<<" Permutation "<<second<<" is: "<<perm<<endl;

    return 0;
}
