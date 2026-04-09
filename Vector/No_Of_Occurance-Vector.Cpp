#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    vector<int>V;

    for(int i=0;i<n;i++){

        int element;
        cout<<"Enter element"<<i+1<<": ";
        cin>>element;

        V.push_back(element);

    }

    int Occurance;
    cout<<"Enter element to count occurances: ";
    cin>>Occurance;

    int count=0;
    
    for(int i=0;i<n;i++){

        if(V[i]==Occurance){
            count++;
        }

    }

    if(count>0){

        cout<<"Element "<<Occurance<<" occurs "<<count<<" times"<<endl;

    }
    else{

        cout<<"Elemnent "<<Occurance<<" not found in the array!"<<endl;

    }

    return 0;

}