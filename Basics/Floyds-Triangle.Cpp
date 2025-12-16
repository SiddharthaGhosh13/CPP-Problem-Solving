// Problem Statement: Take Input from User and Print the Pattern (Floyd's Triangle).
// For Example, if User inputs 5, the Output Should be:
                        // 1 
                        // 2 3 
                        // 4 5 6 
                        // 7 8 9 10 
                        // 11 12 13 14 15
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    int a=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }

    return 0;
}