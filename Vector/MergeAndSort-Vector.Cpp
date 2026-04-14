//Problem Statement: Given two vector arrays, V1 and V2, of size n and m, sorted in increasing order, merge the two vector arrays into a single sorted array of size m + n and print them.
//For Example, if the input vector arrays are V1 = [1, 3, 5] and V2 = [2, 4, 6], the output should be:
//Merged and sorted vector: 1 2 3 4 5 6
//Approach: 1. First, take the size of both vector arrays and their elements as input from the user.
//          2. Then, create a new vector array V3 to store the merged and sorted elements.
//          3. Next, use two pointers to traverse both vector arrays simultaneously and compare the current elements of both arrays.
//             - If the current element of V1 is smaller than the current element of V2, add the current element of V1 to V3 and move the pointer of V1 to the next element.
//             - Otherwise, add the current element of V2 to V3 and move the pointer of V2 to the next element.
//          4. After one of the vector arrays is fully traversed, add the remaining elements of the other vector array to V3.
//          5. Finally, print the merged and sorted vector array V3.


#include<iostream>
#include<vector>
using namespace std;

int Sorted_Vector(vector<int>V1,vector<int>V2){

    vector<int>V3;
    int i=0,j=0;

    while(i<V1.size() and j<V2.size()){

        if(V1[i]<V2[j]){

            V3.push_back(V1[i]);
            i++;

        }
        else{

            V3.push_back(V2[j]);
            j++;

        }

    }
    while(i<V1.size()){

        V3.push_back(V1[i]);
        i++;

    }
    while(j<V2.size()){

        V3.push_back(V2[j]);
        j++;

    }

    for(int Result:V3){

        cout<<Result<<" ";

    }


}

int main(){

vector<int>V1;
int n;
cout<<"Enter size of vector 1: ";
cin>>n;

for(int i=0;i<n;i++){

    int num;
    cout<<"Enter element "<<i+1<<": ";
    cin>>num;
    V1.push_back(num);
    
}

vector<int>V2;
int m;
cout<<"Enter size of vector 2: ";
cin>>m;

for(int i=0;i<m;i++){

    int num;
    cout<<"Enter element "<<i+1<<": ";
    cin>>num;
    V2.push_back(num);
    
}

cout<<"Merged and sorted vector: "<<endl;
Sorted_Vector(V1,V2);

return 0;

}