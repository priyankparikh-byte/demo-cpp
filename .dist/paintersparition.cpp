#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int mid){
    int painterCount = 1;
    int timeSum = 0;

    for(int i=0; i<n; i++){
        if(timeSum + arr[i] <= mid){
            timeSum += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > m || arr[i] > mid){
                return false;
            }
            timeSum = arr[i];
        }
    }
    return true;
}


int minTimeToPaint(vector<int> arr, int n, int m){
    int sum = 0;
    if(m>n){
        return -1;
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int start = 0, end = sum;

    while(start < end){
        
        int mid = start + (end - start) / 2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr={40,30,20,10};

    int n = 4, m= 2;

    cout<<minTimeToPaint(arr, n, m);
}