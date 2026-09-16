#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocatebooks(vector<int> arr, int n, int m){
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
 vector<int> arr= {2,1,3,4};
  
 int n = 4, m=2;
 cout<<allocatebooks(arr, n, m);
}