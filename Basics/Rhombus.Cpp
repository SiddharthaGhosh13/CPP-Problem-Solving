// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs 5, the Output Should be:
                    //        * * * * * 
                    //       * * * * * 
                    //     * * * * * 
                    //   * * * * * 
                    // * * * * * 
// Approach: 1. 1st focus On the no. Of rows Present in the Pattern.
//           2. Then think about Every Single line and Solve it Using loops.

#include<iostream>
using namespace std;
int main(){
    int lines;
    cout<<"Enter number of lines: ";
    cin>>lines;

    for(int i=1;i<=lines;i++){
        for(int Space=1;Space<=lines;Space++){
            if((i+Space)<=lines){
                cout<<"  ";
            }
        }

        for(int Star=1;Star<=lines;Star++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    return 0;
}