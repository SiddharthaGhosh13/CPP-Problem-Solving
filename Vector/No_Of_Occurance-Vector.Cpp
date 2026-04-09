// Problem Statement: Take Vector Input from User and find the Number of Occurrences of a specified element. 
// For Example, if User inputs elements as 2, 7, 5, 7, 9 and the specified element is 7, 
// the Output Should be:
// Number of occurrences of 7 is: 2
// Approach: 1. First, take the size of the vector and its elements as input from the user.
//           2. Then, take the specified element as input from the user.
//           3. Next, traverse the vector and count each occurrence of the specified element.
//           4. Finally, print the count of occurrences.

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

    int Occurance;
    cout<<"Enter element to count occurances: ";
    cin>>Occurance;

    int count=0;
    
    for(int i=0;i<n;i++){

        if(V[i]==Occurance){
            count++;
        }

    }

    if(count>0){

        cout<<"Element: "<<Occurance<<", occurs "<<count<<" times"<<endl;

    }
    else{

        cout<<"Element: "<<Occurance<<", not found in the vector!"<<endl;

    }

    return 0;

}