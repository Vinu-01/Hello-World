#include<iostream>
using namespace std;

void printarray(int arr[5]);

int main(){
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={5,4,3,2,1};
    printarray(arr1);
    printarray(arr2);
}
void printarray(int arr[5]){
    cout<<"Printing array elements"<<"\n";
    for (int i = 0; i < 5; i++)
    {
        /* code */cout<<arr[i]<<"\n";
    }
    
}

