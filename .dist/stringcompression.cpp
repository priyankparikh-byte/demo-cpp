#include<iostream>
#include<string>
using namespace std;


int main(){
    string str = "aaabbbccc";
    string compressed = "";
    char current = str[0];
    int count = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == current) {
            count++;
        } else {
            compressed += current + to_string(count);
            current = str[i];
            count = 1;
        }
    }
    compressed += current + to_string(count);

    cout << "Compressed string: " << compressed << endl;

    return 0;
}