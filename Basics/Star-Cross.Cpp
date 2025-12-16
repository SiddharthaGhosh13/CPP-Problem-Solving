// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs 5, the Output Should be:
                    // *       * 
                    //   *   *   
                    //     *     
                    //   *   *   
                    // *       *  
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++)
        {
            if(i==j or (i+j)==(rows+1)){
                cout<<"* ";
                }
            else {
                cout<<"  ";
            }
        }
        cout << endl;
    }

    return 0;
}