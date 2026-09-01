#include<iostream>
using namespace std;

int main(){
    int arr[7]= {3,-4,5,4,-1,7,-8};
    int max_sum =0;
    int currsum = 0;
    for(int i =0; i<7;i++){
      currsum = arr[i];
      max_sum = max(max_sum,currsum);
      if(currsum<0){
        currsum =0;
      }

    }
    cout<<max_sum;
}