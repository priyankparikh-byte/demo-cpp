#include<iostream>
#include<vector>
using namespace std;


int main(){
    int arr[]={0,2,0,2,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2){
            count2++;
        }
    }
    cout<<"\nCount of 0: "<<count0<<"\nCount of 1: "<<count1<<"\nCount of 2: "<<count2;
}