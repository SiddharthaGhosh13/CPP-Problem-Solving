// Problem Statement: Take no. Input from User and Print their Sum.
// For Example, if User inputs 56789, the Output Should be:
// - Sum of Digits Of 56789 is: 35
// Approach: 1. Take no. Input and Calculate Sum Using last Digit and "/ and % Operators".

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int Sum=0;
    int n=num;
    while(n!=0){
        int lastDigit=n%10;
        Sum=Sum+lastDigit;
        n/=10;
    }

    cout<<"Sum of Digits Of "<<num<<" is: "<<Sum<<endl;
    return 0;
    
}