#include <iostream>

using namespace std;

int main()
{
    int num;
    long long fac=1;
    cin >> num;

    for(int i=1; i <= num; i++){
        fac *= i;
        cout << fac<<endl;

    }
    return 0;
}
