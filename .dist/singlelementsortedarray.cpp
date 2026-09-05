 #include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // Make mid even
        if (mid % 2 == 1) {
            mid--;
        }

        if (arr[mid] == arr[mid + 1]) {
            // Pair is correct → single is on the right
            start = mid + 2;
        }
        else {
            // Pair is broken → single is on the left or at mid
            end = mid;
        }
    }

    cout << "Single element: " << arr[start] << endl;

    return 0;
}