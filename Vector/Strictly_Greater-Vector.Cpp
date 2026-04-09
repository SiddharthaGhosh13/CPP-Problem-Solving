// Problem Statement: Take Vector Input from User and find the no. of elements strictly greater than a specified element.
// For Example, if User inputs elements as 2, 7, 5, 7, 9 and the specified element is 5,
// the Output Should be:
// Elements greater than 5 are: 7 9
// Approach: 1. First, take the size of the vector and its elements as input from the user.
//           2. Then, take the specified element as input from the user.
//           3. Next, traverse the vector and compare each element with the specified element.
//           4. If an element is greater than the specified element, print it and update the specified element to the current element.
//           5. Finally, if no elements are greater than the specified element, print that the specified element is the greatest in the vector. 

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

    int num;
    cout<<"Enter element to find the greater elements: ";
    cin>>num;

    bool found=false;
    for(int i=0;i<n;i++){

        if(V[i]==num){
            found=true;
            break;
        }

    }

    if(!found){

        cout<<"Element "<<num<<" not found in the vector!";
        return 0;

    }

    cout<<"Elements greater than "<<num<<" are: "<<endl;

    int Greater=num;
    int count=0;
    for(int i=0;i<n;i++){

        if(V[i]>Greater){
            cout<<V[i]<<" ";
            Greater=V[i];
            count++;
        }

    }

    if(count==0){

        cout<<num<<" is the greatest element in the vector!"<<endl;

    }

    return 0;

}