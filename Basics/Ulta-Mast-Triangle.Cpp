// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs 5, the Output Should be:
                        // *****
                        //  ****
                        //   ***
                        //    **
                        //     *    
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;

int main(){
    int lines;
    cout << "Enter lines: "; 
    cin >> lines;

    for(int rows=1;rows<=lines;rows++){
        if(rows==1){
            for(int Stars=1;Stars<=lines;Stars++){
            cout<<"*";
        }
        cout<<endl;
        }
        for(int Spaces=1;Spaces<=rows;Spaces++){
            cout<<" ";
        }
        for(int inStars=1;(rows+inStars)<=lines;inStars++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}