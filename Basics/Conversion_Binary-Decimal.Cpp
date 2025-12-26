// Problem Statement: Take Binary number Input from User and Convert it
// to Decimals.
// For Example, if User inputs 1101, the Output Should be:
// - After Decimal Conversion: 13
// Approach: 1. Create function "Power" to help in the Calculation 
//              Of (last Digit X 2^Power) .
//           2. Calculate last Digits by (lastDigit=n%10) and then
//              Store it temporarily by temp=(lastDigit*Power(i))+temp
//              and then iterate the loop and it is Converted to Decimal.

#include<iostream>
using namespace std;

int Power(int a){
        int Pow=1;
        for(int i=1;i<=a;i++){
            Pow=2*Pow;
        }
        return Pow;
        }

int main(){
    int binary;
    cout<<"Enter Binary no: ";
    cin>>binary;

    int i=0,n=binary,lastDigit,temp=0;
    while(n>0){
        lastDigit=n%10;
        temp=(lastDigit*Power(i))+temp;
        n=n/10;
        i++;
    }
    
    cout<<"After Decimal Conversion: "<<temp;

    return 0;
}