 #include<iostream>
 using namespace std;

 int binarysearch(int arr[],int n,int key,int st,int end){
    int mid = st + (end-st)/2;
    if(st>end){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return binarysearch(arr,n,key,st,mid-1);
    }
    return binarysearch(arr,n,key,mid+1,end);
 }

 int main(){
     int arr[] = {1,2,3,4,5,6,7,8,9};
     int n = sizeof(arr)/sizeof(arr[0]);
     int key = 5;
     int st = 0;
     int end = n-1;
     cout<<binarysearch(arr,n,key,st,end)<<endl;
 }