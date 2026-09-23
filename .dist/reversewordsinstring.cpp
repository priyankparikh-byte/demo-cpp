#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello World";

    int start = 0;
    int end = str.length() - 1;

    // Reverse the complete string
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    string ans = "";
    int n = str.length();

    // Reverse each word
    for (int i = 0; i < n; i++) {
        string word = "";

        while (i < n && str[i] != ' ') {
            word += str[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0) {
            ans += word + " ";
        }
    }

    cout << "Reversed string: " << ans << endl;

    return 0;
}