// Problem Statement: Take Day no. Input from User and Print the Day name.
// For Example, if User inputs 5, the Output Should be: It's Friday
// Approach: 1. Use Switch Case for Storing the no. Of Days (1-7) and Printing 
//              the Day name According to it (Mon-Sun).
//           2. Put Break Statement, to Come Out Of the Switch Case after Getting 
//              the result.

#include<iostream>
using namespace std;

int main(){
    int Day;
    cout<<"Enter Day No: ";
    cin>>Day;

    switch(Day){

        case 1: {
            cout<<"It's Monday";
            break;
        }
        case 2: {
            cout<<"It's Tuesday";
            break;
        }
        case 3: {
            cout<<"It's Wednesday";
            break;
        }
        case 4: {
            cout<<"It's Thursday";
            break;
        }
        case 5: {
            cout<<"It's Friday";
            break;
        }
        case 6: {
            cout<<"It's Saturday";
            break;
        }
        case 7: {
            cout<<"It's Sunday";
            break;
        }
        default: {
            cout<<"Invalid Day No ";
        }
    }
    return 0;
}