// Problem Statement: Take Input from User and Print if it's Prime Or not.
// For Example, if User inputs 5, the Output Should be: 5 is a Prime number
// Approach: 1. Use If-Else for the Correct Conditions for Prime.
//           2. Use loops for finding Prime Checking.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int i=2;
    if(num<=1){
        cout<<num<<" is not a Prime number"<<endl;
        return 0;
    }

    else if(num==2 || num==3){
        cout<<num<<" is a Prime number"<<endl;
        return 0;
    }

    while(i<=(num-1)){
        if(num%i==0){
            cout<<num<<" is not a Prime number"<<endl;
            break;
        }
        i++;
        if(i==(num-1)){
            cout<<num<<" is a Prime number"<<endl;
        }
        
    }
    return 0;
}