// Problem Statement: Take array Input from User and enter sum of pairs to find in the array. 
// For Example, if User inputs elements as 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 and sum as 10 
// the Output Should be:
// Pairs of elements with sum 10 are: (1,9) (2,8) (3,7) (4,6)
// Approach: 1. In the main function, take array input from the user and the sum to check for pairs.
//           2. Use nested loops to iterate through the array and check for pairs of elements that add up to the specified sum.
//           3. If a pair is found, print the pair and keep track of the total number of pairs found.
//           4. If no pairs are found, print a message indicating that no pairs were found with the specified sum.

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
    int Sum, totalPairs=0;
    cout<<"Enter sum to check for pairs: ";
    cin>>Sum;

    cout<<"Pairs of elements with sum "<<Sum<<" are: "<<endl;

    for(int pair1=0; pair1<=size-1; pair1++){
        for(int pair2=pair1+1; pair2<=size-1; pair2++){
            if(arr[pair1]+arr[pair2]==Sum){
                cout<<"("<<arr[pair1]<<","<<arr[pair2]<<")"<<" ";
                totalPairs++;
            }
        }
    }
    if(totalPairs==0){
        cout<<"No pairs found with sum "<<Sum<<endl;
    }
    
    return 0;

}