// Problem Statement: Take no. Input from User and Print their Sum & reverse the number.
// For Example, if User inputs 56789, the Output Should be:
// - Sum of Digits Of 56789 is: 35
// - Reversed number is: 98765
// Approach: 1. Take no. Input and Calculate Sum Using last Digit and "/ and % Operators".  
//           2. Again Calculate the reversed number Using "/ and % Operators".

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

    int i=0, Rev=0;
    while(true)
    {
        int Count=num%10;
        Rev=Rev*10+Count;
        num=num/10;
        if(num==0) {break;}
    }

    cout<<"Reversed number is: "<<Rev<<endl;
    
    return 0;
}