#include <iostream>

using namespace std;

bool isPalindrome(int num){
    if(num<0)return false;
    int original = num;
    long long reversed = 0;

    while(num>0){
    reversed = reversed*10+num%10;
    num /= 10;
    }
    return(original == reversed);
}

int main()
{
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    if(isPalindrome(number)){
        cout<<number<<" is a palindrome!" <<endl;
    } else{
        cout<<number<<" is Not a Palindrom." <<endl;
    }
    return 0;
}
