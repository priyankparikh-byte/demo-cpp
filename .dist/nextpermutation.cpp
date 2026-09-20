#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {

    int n = nums.size();

    // Step 1: Find pivot
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: Find element greater than pivot
    if (i >= 0) {
        int j = n - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        // Step 3: Swap pivot and j
        swap(nums[i], nums[j]);
    }

    // Step 4: Reverse after pivot
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {

    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    // Print array
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}