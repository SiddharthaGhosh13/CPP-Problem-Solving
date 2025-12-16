// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs 5, the Output Should be:
                    //     *
                    //    ***
                    //   *****
                    //  *******
                    // *********
                    //  *******
                    //   *****
                    //    ***
                    //     *
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;
int main(){
    int lines;
    cout<<"Enter lines: ";
    cin>>lines;

    for(int rows=1;rows<=lines;rows++){
        for(int Spaces=1;(rows+Spaces)<=lines;Spaces++){
            cout<<" ";
        }
        for(int Stars=1;Stars<=(2*rows-1);Stars++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int rows=lines-1;rows>=1;rows--){
        for(int Spaces=1;(rows+Spaces)<=lines;Spaces++){
            cout<<" ";
    }
    for(int Stars=1;Stars<=(2*rows-1);Stars++){
            cout<<"*";
        }
        cout<<endl;
}
    return 0;
}