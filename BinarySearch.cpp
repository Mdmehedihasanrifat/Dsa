#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int key){

    int Start=0;
    int End=n;
    while(Start<=End){

        int mid=(Start+End)/2;
        if(arr[mid]==key){return mid;}
        else if(arr[mid]>key){
            End=mid-1;
        }
        else{
            Start=mid+1;
        }
    }
    return -1;
}

int main(){


    int n;


    cout<<"enter Value of n\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

   cout<< BinarySearch(arr,n,4);




}
