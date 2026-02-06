// Problem Statement: Take array Input from User and enter indices to reverse that part of the array. 
// For Example, if User inputs elements as 7, 10, 18, 45, 93 and indices as 1 and 3 
// the Output Should be:
// Array after reversing from index 1 to 3: 7 45 18 10 93
// Approach: 1. Create a function that takes array, first index and last index as parameters.
//           2. In the function, use a loop to swap elements from the first index and last index moving towards the center until they meet or cross each other.
//           3. In the main function, take array input from the user and call the reverse function with the specified indices.
//           4. Print the modified array after reversing the specified part.

#include<iostream>
using namespace std;

void reverseArray(int arr[], int first, int last){
    if(first>last){
        cout<<"Invalid indices!"<<endl;
        return;
    }

    for(int idx=first, lastIdx=last; idx<lastIdx; idx++, lastIdx--){
        int temp=arr[idx];
        arr[idx]=arr[lastIdx];
        arr[lastIdx]=temp;
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

    int first, last;
    cout<<"Enter first and last index to reverse: ";
    cin>>first>>last;

    if(first<0 || last>=size){
        cout<<"Indices out of bounds!"<<endl;
        return 0;
    }

    reverseArray(arr, first, last);
    cout<<"Array after reversing from index "<<first<<" to "<<last<<": "<<endl;

    for(int idx=0; idx<=size-1; idx++){
        cout<<arr[idx]<<" ";
    }

    return 0;

}