#include <iostream>
using namespace std;

int main() {
    char current_char = 'A';
    int rows = 5; 

    for (int i = 1; i <= rows; ++i) {
       
        for (int j = 1; j <= i; ++j) {
            cout << current_char << " ";
            current_char++;
        }
        cout << endl; 
    }

    return 0;
}