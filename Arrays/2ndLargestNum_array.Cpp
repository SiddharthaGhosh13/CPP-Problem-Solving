// Problem Statement: Take array Input from User and find the 2nd largest element in the array. 
// For Example, if User inputs elements as 7, 10, 18, 45, 93 
// the Output Should be:
// Second largest element in array is: 45
// Approach: 1. First, declare the maximum and second maximum variables and put its initial value as the first element of the array.
//           2. Then, traverse the array and compare each element with the maximum variable.
//           3. If the current element is greater than or equal to the maximum variable,
//              update second maximum to the value of maximum and maximum to the current element.
//           4. If the current element is less than maximum but greater than second maximum,
//              update second maximum to the current element.
//           5. If maximum and second maximum are equal, update second maximum to the current element.

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

    int Max=arr[0], SecondMax=arr[0];

    for(int idx=0; idx<=size-1; idx++){
        if(arr[idx]>=Max){
            SecondMax=Max;
            Max=arr[idx];
        }
        else if(arr[idx]<Max and arr[idx]>SecondMax){
            SecondMax=arr[idx];
        }
        else if(Max==SecondMax){
            SecondMax=arr[idx];
        }
    }

    cout<<"Second largest element in array is: "<<SecondMax<<endl;

    return 0;

}