 #include<iostream>
 using namespace std;

 int main(){
    int x = 101;
    long binform = 10;
    if( binform < 0){
        x=1/x;
        binform = -binform;
    }
    double ans = 1;

    while(binform >0){
        if(binform%2 == 1){
            ans = ans * x;
        }
        x+=x;
        binform /= 2;

    }
    cout << ans << endl;
    return 0;
 }