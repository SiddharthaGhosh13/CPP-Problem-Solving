// Problem Statement: Take array Input from User and find the missing element in the array.
// For Example, if User inputs elements as 1, 2, 4, 5 (size of array is 5) 
// the Output Should be:
// Missing element is: 3
// Approach: 1. Take size of array from user and declare array of that size.
//           2. Take array elements as input from user.
//           3. Calculate the sum of all elements in the array.
//           4. Calculate the expected sum of first 'n' natural numbers using the formula (n*(n+1))/2.
//           5. Subtract the actual sum from the expected sum to find the missing element
//           6. Print the missing element.

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"('Size' is the first 'n' natural numbers from 1 to n where one number is missing!)"<<endl;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];

    for(int idx=0; idx<size-1; idx++){
        cout<<"Enter element"<<idx+1<<": ";
        cin>>arr[idx];
    }

    cout<<"Array elements are: "<<endl;
    for(int idx=0; idx<size-1; idx++){
        cout<<arr[idx]<<" ";
    }

    cout<<endl;

    cout<<"Missing number is: "<<endl;

    int realSum=0;
    for(int idx=0; idx<size-1; idx++){
        realSum+=arr[idx];
    }
    int ExpectedSum=(size*(size+1))/2;

    int MissingElement=ExpectedSum-realSum;
    cout<<MissingElement<<endl;

    return 0;

}