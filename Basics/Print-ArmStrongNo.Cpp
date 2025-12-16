// Problem Statement: Take number Input from User to find ArmStrong 
//                    numbers from 1 to the Input.
// For Example, if User inputs 500, the Output Should be:
// ArmStrong numbers between 1 and 500 are: 
// 1 2 3 4 5 6 7 8 9 153 370 371 407 
// Approach: 1. Create function "Armstrong" to find Armstrong numbers
//              by Calculating the Sum Of Cubes Of Each Digit Present.
//           2. Then Print the Armstrong numbers in Main Function.

#include<iostream>
#include<cmath>
using namespace std;
int ArmStrong(int n){
    int Sum=0,lastDigit,Root,temp=n,Digits=0;
    for(int i=n;i!=0;i=i/10){
        Digits++;}
    while(temp!=0){
        lastDigit=(temp%10);
        Root=pow(lastDigit,Digits);
        Sum=Sum+Root;
        temp=temp/10;
    }
    return Sum;
}
int main(){
    int num;
    cout<<"Find ArmStrong from 1 to: ";
    cin>>num;
    cout<<"ArmStrong numbers between 1 and "<<num<<" are: "<<endl;
    for(int i=1;i<=num;i++){
        if(ArmStrong(i)==i){
            cout<<i<<" ";
        }
    }
    return 0;
}