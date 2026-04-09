// Problem Statement: Take Vector Input from User and find the Last Occurance of a specified element. 
// For Example, if User inputs elements as 2, 7, 5, 7, 9 and the specified element is 7, 
// the Output Should be:
// Last occurance of 7 is at position: 4
// Approach: 1. First, take the size of the vector and its elements as input from the user.
//           2. Then, take the specified element as input from the user.
//           3. Next, traverse the vector from the end and compare each element with the specified element.
//           4. If a match is found, store the index and break the loop.
//           5. Finally, if a match is found, print the index of the last occurance; otherwise, print that the element is not found in the vector.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    vector<int>V;

    for(int i=0;i<n;i++){

        int element;
        cout<<"Enter element"<<i+1<<": ";
        cin>>element;

        V.push_back(element);

    }

    int last_Occurance;
    cout<<"Enter element to find last occurance: ";
    cin>>last_Occurance;

    bool found=false;
    int idx=0;

    for(int i=n-1;i>=0;i--){

        if(V[i]==last_Occurance){
            found=true;
            idx=i;
            break;
        }

    }

    if(found){

        cout<<"Last occurance of "<<last_Occurance<<" is at position: "<<idx+1<<endl;

    }
    else{

        cout<<"Element: "<<last_Occurance<<", not found in the vector!"<<endl;

    }

    return 0;

}