#include<iostream>
#include<vector>
using namespace std;

void printallSubsets(vector<int>arr, vector<int>ans, int index, int n){
    if(index==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[index]);
    printallSubsets(arr,ans,index+1,n);
    ans.pop_back();
    printallSubsets(arr,ans,index+1,n);
}

int main(){
   vector <int> arr = {1,2,3,4};
   vector<int> ans;
    int n = arr.size();
    printallSubsets(arr,ans,0,n);
    return 0;

}