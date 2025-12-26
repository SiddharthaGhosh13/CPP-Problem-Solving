// Problem Statement: Find the Possible Prime numbers in Between two numbers.
// For Example, if User inputs 5 and 45, the Output Should be:
// - Prime numbers in between 5 and 45 are:
//   7 11 13 17 19 23 29 31 37 41 43
// Approach: 1. Create Bool function "is_Prime" to Check Prime numbers.
// (Lessons learned)-> Only 1 return Statement hits, So keep "return false"
//  in loop(if Block) and "return true" Out Of the Block.
//           2. In Main function We iterated the Values and Ultimately
//              found Out the in Between Prime numbers.

#include<iostream>
using namespace std;

bool is_Prime(int num){
    if(num<=1) return false;

    for(int a=2;a<=(num-1);a++){
        if(num%a==0) return false;
    }
    return true;
}

int main(){
    int num1,num2;
    cout<<"Enter two numbers(to find in between Prime numbers): ";
    cin>>num1>>num2;

    if(num1>num2){
        swap(num1,num2);
    }
    cout<<"Prime numbers in between "<<num1<<" and "<<num2<<" are:\n";
    for(int i=num1+1;i<=num2-1;i++){
        if(is_Prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}