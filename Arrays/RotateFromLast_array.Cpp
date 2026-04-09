// Problem Statement: Take array Input from User and enter number of rotations to rotate the array from last. 
// For Example, if User inputs elements as 7, 10, 18, 45, 93 and rotations as 2 
// the Output Should be:
// Array after 2 rotations: 45 93 7 10 18
// Approach: 1. Create a function that takes array, size and number of rotations as parameters.
//           2. In the function, use a loop to rotate the array by moving elements from last to first position one by one.
//           3. In the main function, take array input from the user and call the rotate function with the specified number of rotations.
//           4. Print the modified array after rotating.

#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int rotations){
    rotations=rotations%size;

    for(int rotate=1; rotate<=rotations; rotate++){
        int lastElement=arr[size-1];
        for(int idx=0; idx<size-1; idx++){
            arr[size-1-idx]=arr[size-2-idx];
        }
        arr[0]=lastElement;
    }
    return;
}

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

    int rotations;
    cout<<"Enter number of rotations: ";
    cin>>rotations;

    rotateArray(arr, size, rotations);
    cout<<"Array after "<<rotations<<" rotations: "<<endl;

    for(int idx=0; idx<=size-1; idx++){
        cout<<arr[idx]<<" ";
    }

    return 0;

}