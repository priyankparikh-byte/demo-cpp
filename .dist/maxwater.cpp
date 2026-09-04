#include<iostream>
using namespace std;


void maxwater(int height[],int n){
    int maxwater = 0;
    int lp=0, rp=n-1;
    while(lp<rp){
        int widht = rp-lp;
        int ht = min(height[lp],height[rp]);
        int area = widht*ht;
        maxwater = max(maxwater,area);
        height[lp]<height[rp]?lp++:rp--;
    }
    cout << maxwater << endl;
}
 
int main(){
   int height[] = {1,8,6,2,5,4,8,3,7};
   int n = sizeof(height)/sizeof(height[0]);
   maxwater(height, n);

//    int n = sizeof(height)/sizeof(height[0]);
//    for(int i =0 ; i<n ; i++){
//     for(int j = i+1;j<n;j++){
//         int area = (j-i)*min(height[i],height[j]);
//         cout << area << endl;
//     }
//    }
}