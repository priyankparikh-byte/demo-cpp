#include<iostream>
#include<vector>
using namespace std;


int main(){
    int arr[]={0,2,0,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid = 0, high = n-1, low = 0;

    while(low <= high){
        mid = low + (high - low)/2;
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
        else{
            mid++;
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}