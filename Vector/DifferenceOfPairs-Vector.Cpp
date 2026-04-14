//Problem Statement: Given a vector array and a difference value, find all pairs of elements in the vector that have the specified difference.
//For Example, if the input vector array is V = [1, 3, 5, 7, 9] and the difference is 2, the output should be:
//Pairs with difference 2 are: (1,3) (3,5) (5,7) (7,9)
//Approach: 1. First, take the size of the vector array and its elements as input from the user.
//          2. Then, use nested loops to compare each pair of elements in the vector.
//          3. If the absolute difference between any two elements equals the specified difference, print that pair.
//          4. Finally, print all such pairs found.


#include<iostream>
#include<vector>
using namespace std;

int main(){

    int Size;
    cout<<"Enter size of vector: ";
    cin>>Size;
    vector<int>V;

    for(int i=0;i<Size;i++){
        
        int num;
        cout<<"Enter element"<<i+1<<": ";
        cin>>num;
        V.push_back(num);

    }

    cout<<"Vector elements are: "<<endl;

    for(int i=0;i<Size;i++){

        cout<<V[i]<<" ";

    }

    cout<<endl;

    int Diff;
    cout<<"Enter difference to find pairs: ";
    cin>>Diff;

    cout<<endl;
    cout<<"Pairs with difference "<<Diff<<" are: "<<endl;

    int Count=0;
    for(int i=0;i<Size;i++){
        for(int j=i+1;j<Size;j++){

            if(V[i]-V[j]==Diff){

                cout<<"("<<V[i]<<","<<V[j]<<")"<<" ";
                Count++;

            }
            if(V[j]-V[i]==Diff){

                cout<<"("<<V[j]<<","<<V[i]<<")"<<" ";
                Count++;

            }

        }
    }

    if(Count==0){

        cout<<"No pairs found!";

    }

    return 0;

}