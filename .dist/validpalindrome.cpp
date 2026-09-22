#include<iostream>
#include<string>
using namespace std;


int main(){
    string s = "A man, a plan, a canal: Panama";

    int left = 0, right = s.length() - 1;
    while (left < right) {
        // Move left pointer to the next alphanumeric character
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move right pointer to the previous alphanumeric character
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        // Compare characters in a case-insensitive manner
        if (tolower(s[left]) != tolower(s[right])) {
            cout << "Not a palindrome" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "Is a palindrome" << endl;
    return 0;
}