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

    int num;
    cout<<"Enter element to find the greater elements: ";
    cin>>num;

    bool found=false;
    for(int i=0;i<n;i++){

        if(V[i]==num){
            found=true;
            break;
        }

    }

    if(!found){

        cout<<"Element "<<num<<" not found in the array!";
        return 0;

    }

    cout<<"Elements greather than "<<num<<" are: "<<endl;

    int Greater=num;
    int count=0;
    for(int i=0;i<n;i++){

        if(V[i]>Greater){
            cout<<V[i]<<" ";
            Greater=V[i];
            count++;
        }

    }

    if(count==0){

        cout<<num<<" is the greatest element in the array!"<<endl;

    }

    return 0;

}