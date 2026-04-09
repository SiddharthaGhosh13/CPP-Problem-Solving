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

    int last_Occurance;
    cout<<"Enter element to find last occurance: ";
    cin>>last_Occurance;

    bool found=false;
    int idx=0;

    for(int i=n-1;i>=0;i--){

        if(V[i]==last_Occurance){
            found=true;
            idx=i;
            break;
        }

    }

    if(found){

        cout<<"Last occurance of "<<last_Occurance<<" is at position: "<<idx+1<<endl;

    }
    else{

        cout<<"Element "<<last_Occurance<<" not found in the array!"<<endl;

    }

    return 0;

}