#include<iostream>
using namespace std;

int main(){
   int height[] = {1,8,6,2,5,4,8,3,7};
   int n = sizeof(height)/sizeof(height[0]);
   for(int i =0 ; i<n ; i++){
    for(int j = i+1;j<n;j++){
        int area = (j-i)*min(height[i],height[j]);
        cout << area << endl;
    }
   }
}