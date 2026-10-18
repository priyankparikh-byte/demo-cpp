#include<iostream>
#include<vector>
using namespace std;

bool isssorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && isssorted(arr,n-1);
    
}


int main(){
    vector<int> arr = {1,8,3,4,5,6};
    int n = arr.size();
    cout<<isssorted(arr,n)<<endl;
    return 0;
}