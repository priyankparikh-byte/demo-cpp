#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int aggressiveCows(vector<int> arr, int n, int m){
    sort(arr.begin(), arr.end());
    int start = 0, end = arr[n-1] - arr[0];
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        int cowCount = 1;
        int lastPos = arr[0];

        for(int i=1; i<n; i++){
            if(arr[i] - lastPos >= mid){
                cowCount++;
                lastPos = arr[i];
            }
        }

        if(cowCount >= m){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    vector<int> stalls={1,2,4,8,9};
    int n = 5 , m=3;
    cout<<aggressiveCows(stalls, n, m);
}