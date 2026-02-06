// Problem Statement: Take array Input from User and enter sum of triplets to find in the array. 
// For Example, if User inputs elements as 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 and sum as 10 
// the Output Should be:
// Triplets of elements with sum 10 are: (1,2,7) (1,3,6) (1,4,5) (2,3,5)
// Approach: 1. In the main function, take array input from the user and the sum to check for triplets.
//           2. Use nested loops to iterate through the array and check for triplets of elements that add up to the specified sum.
//           3. If a triplet is found, print the triplet and keep track of the total number of triplets found.
//           4. If no triplets are found, print a message indicating that no triplets were found with the specified sum.

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
    int Sum, totalTriplets=0;
    cout<<"Enter sum to check for triplets: ";
    cin>>Sum;

    cout<<"Triplets of elements with sum "<<Sum<<" are: "<<endl;
    for(int pair1=0; pair1<=size-1; pair1++){
        for(int pair2=pair1+1; pair2<=size-1; pair2++){
            for(int pair3=pair2+1; pair3<=size-1; pair3++){
                if(arr[pair1]+arr[pair2]+arr[pair3]==Sum){
                    cout<<"("<<arr[pair1]<<","<<arr[pair2]<<","<<arr[pair3]<<")"<<" ";
                    totalTriplets++;
                }
            }
        }
    }
    if(totalTriplets==0){
        cout<<"No triplets found with sum "<<Sum<<endl;
    }
    
    return 0;

}