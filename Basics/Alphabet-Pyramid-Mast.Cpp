// Problem Statement: Take Input from User and Print the Pattern.
// For Example, if User inputs 5, the Output Should be:
                    // ABCDEFGHI
                    // ABCD FGHI
                    // ABC   GHI
                    // AB     HI
                    // A       I
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
            for(int Stars=1;Stars<=(lines*2-1);Stars++){
                cout<<char(64+Stars);
            }
            cout<<endl;
        }
        for(int inStars1=1;(rows+inStars1)<=lines;inStars1++){
            cout<<char(64+inStars1);
        }
        for(int Space=1;Space<=(rows*2-1);Space++){
            cout<<" ";
        }
        for(int inStars2=1;(rows+inStars2)<=lines;inStars2++){
            cout<<char(64+rows+lines+inStars2-1);
        }
        cout<<endl;
    }
    return 0;
}