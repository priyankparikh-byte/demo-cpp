#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int m = 3, n = 3;

    int idx = m+n-1; 
    int i = m-1, j = n-1;
    while(i >= 0 && j >= 0){
        if(arr[i] > arr2[j]){
            arr[idx] = arr[i];
            i--;
        }
        else{
            arr[idx] = arr2[j];
            j--;
        }
        idx--;
    }
    while(i >= 0){
        arr[idx] = arr[i];
        i--;
        idx--;
    }
    while(j >= 0){
        arr[idx] = arr2[j];
        j--;
        idx--;
    }
    return 0;
}