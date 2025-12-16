// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs rows=5 and Columns=7, the Output Should be:
                    // * * * * * * * 
                    // *           * 
                    // *           * 
                    // *           * 
                    // * * * * * * * 
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;
int main(){
    int rows,Cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>Cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=Cols;j++){
            if(i==1 or j==1 or i==rows or j==Cols){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}