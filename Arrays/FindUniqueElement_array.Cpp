// Problem Statement: Take array Input from User and find the unique element in the array.
// For Example, if User inputs elements as 1, 2, 3, 2, 1 (size of array is 5) 
// the Output Should be:
// Unique element is: 3
// Approach: 1. Take size of array from user and declare array of that size.
//           2. Take array elements as input from user.
//           3. Use two nested loops to compare each element with every other element in the array.
//           4. If an element is found to be unique (not equal to any other element), print it and increment the unique count.
//           5. After the loops, check if unique count is zero, if yes print "No unique element in array!" message.

#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];

    for(int idx=0; idx<=size-1; idx++){
        cout<<"Enter element"<<idx+1<<": ";
        cin>>arr[idx];
    }

    cout<<"Array elements are: "<<endl;
    for(int idx=0; idx<=size-1; idx++){
        cout<<arr[idx]<<" ";
    }

    cout<<endl;

    cout<<"Unique elements are: "<<endl;

    int Count=0;
    for(int idx=0; idx<=size-1; idx++){
        bool Unique=true;
        for(int idx2=0; idx2<=size-1; idx2++){
            if(arr[idx]==arr[idx2] && idx!=idx2){
                Unique=false;
                break;
            }
        }
        if(Unique==true){
            cout<<arr[idx]<<" ";
            Count++;
        }
    }

    if(Count==0){
        cout<<"No unique element in array!"<<endl;
    }

    return 0;

}