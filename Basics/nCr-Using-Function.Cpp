// Problem Statement: Take two number Input from User to find nCr.
// For Example, if User inputs 5 and 2, the Output Should be:
// - The value Of Combination is: 360
// Approach: 1. Create function "factorial" to find factorial Of a number.
//           2. Then Put the formula Of nCr in Main Function and Print the 
//              Combination.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    int nCr=factorial(n)/factorial(r)*factorial(n-r);
    cout<<"The value Of Combination is: "<<nCr<<endl;
    
    return 0;
}