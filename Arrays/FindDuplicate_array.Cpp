// Problem Statement: Take array Input from User and find the duplicate elements in the array.
// For Example, if User inputs elements as 7, 15, 22, 15, 7 
// the Output Should be:
// Duplicate elements are: 7 15
// Approach: 1. Take size of array from user and declare array of that size.
//           2. Take array elements as input from user.
//           3. Use two nested loops to compare each element with every other element in the array.
//           4. If a duplicate element is found, print it and increment the duplicate count
//           5. After the loops, check if duplicate count is zero, if yes print "No duplicate elements in array!" message.

#include<iostream>
using namespace std;

int isDuplicate(int arr[], int size, int * DuplicateCount){
    for(int idx=0; idx<size-1; idx++){
        for(int idx2=idx+1; idx2<=size-1; idx2++){
            if(arr[idx]==arr[idx2]){
                cout<<arr[idx]<<" ";
                (*DuplicateCount)++;
            }
        }
    }
    return 0;
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

    int DuplicateCount=0;
    cout<<"Duplicate elements are: "<<endl;
    isDuplicate(arr, size, &DuplicateCount);
    cout<<endl;

    if(DuplicateCount==0){
        cout<<"No duplicate elements in array!"<<endl;
    }

    return 0;

}