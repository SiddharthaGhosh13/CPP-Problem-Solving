// Problem Statement: Take two number Input from User to find HCF.
// For Example, if User inputs 24 and 60, the Output Should be:
// - The HCF of 24 and 60 is: 12
// Approach: 1. Create function "Min" and "HCF" to find Minimum and 
//              HCF Of two numbers.
//           2. Then Print the HCF in Main Function.

#include<iostream>
using namespace std;

int min(int a, int b){
    if(a<b) return a;
    else return b;
}

int HCF(int a, int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a,b;
    cout<<"Enter two number to find HCF: ";
    cin>>a>>b;

    cout<<"The HCF of "<<a<<" and "<<b<<" is: "<<HCF(a,b)<<endl;
    return 0;

}