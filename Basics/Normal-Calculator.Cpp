// Problem Statement: Take two no. Input from User and Enter the Operator(+ - / *).
// For Example, if User inputs 5 and 7 and Operator: +, the Output Should be:
// - Sum Of 5 and 7 is: 12
// Approach: 1. Take no. Input and Use Switch Case for Storing the right  
//              Operator(+ - / *) and Printing their Sum, Difference, Product, Division.
//           2. Put Break Statement, to Come Out Of the Switch Case after Getting the
//              result.

#include<iostream>
using namespace std;

int main(){
    float a;
    cout<<"Enter 1st no: ";
    cin>>a;
    float b;
    cout<<"Enter 2nd no: ";
    cin>>b;

    char Operator;
    cout<<"Enter Operator(+ - / *): ";
    cin>>Operator;

    switch(Operator){
        case '+':{
            cout<<"Sum Of "<<a<<" and "<<b<<" is: "<<(a+b);
            break;
        }
        case '-':{
            cout<<"Difference Of "<<a<<" and "<<b<<" is: "<<(a-b);
            break;
        }
        case '/':{
            cout<<"Division Of "<<a<<" and "<<b<<" is: "<<(a/b);
            break;
        }
        case '*':{
            cout<<"Product Of "<<a<<" and "<<b<<" is: "<<(a*b);
            break;
        }
        default:{
            cout<<"Invalid Operator";
        }
        
    }
    return 0;
}