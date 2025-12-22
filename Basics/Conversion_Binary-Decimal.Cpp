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