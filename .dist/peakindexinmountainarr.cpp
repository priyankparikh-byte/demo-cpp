#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 2, 5, 7, 6, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // Increasing side → move right
            start = mid + 1;
        }
        else {
            // Decreasing side → move left
            end = mid;
        }
    }

    cout << "Peak index: " << start << endl;
    cout << "Peak element: " << arr[start] << endl;

    return 0;
}