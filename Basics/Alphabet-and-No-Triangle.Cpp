// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs 5, the Output Should be:
                            // A 
                            // 1 2 
                            // A B C 
                            // 1 2 3 4 
                            // A B C D E
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<j<<" ";
            }
            else{
                cout<<(char)(j+64)<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}