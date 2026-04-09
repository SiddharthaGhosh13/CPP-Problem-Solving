// Problem Statement: Take array Input from User and check if the array is palindrome or not. 
// For Example, if User inputs elements as 7, 15, 22, 15, 7 
// the Output Should be:
// Array is a palindrome
// Approach: 1. Create a function that takes array and its size as parameters.
//           2. In the function, use a loop to compare elements from the start and end of the array moving towards the center.
//           3. If any pair of elements do not match, return false indicating the array is not a palindrome.
//           4. If all pairs match, return true indicating the array is a palindrome.
//           5. In the main function, take array input from the user and call the palindrome check function.
//           6. Print the result based on the function's return value.

#include<iostream>
using namespace std;

bool Check_Palindrome(int arr[], int size){
    for(int idx=0,lastIdx=size-1; idx<=size-1,lastIdx>=0; idx++,lastIdx--){
        if(arr[idx]!=arr[lastIdx]){
            return 0;
        }
    }
    return 1;
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

    if(Check_Palindrome(arr, size)){
        cout<<"Array is a palindrome"<<endl;
    }
    else{
        cout<<"Array is not a palindrome"<<endl;
    }

    return 0;

}