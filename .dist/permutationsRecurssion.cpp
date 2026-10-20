
#include <iostream>
#include <vector>
using namespace std;

void getPerm(vector<int>& nums, int idx, vector<vector<int>>& ans) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);

        getPerm(nums, idx + 1, ans);

        swap(nums[idx], nums[i]); // Backtracking
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> ans;
    getPerm(nums, 0, ans);

    for (auto &p : ans) {
        for (int x : p) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
