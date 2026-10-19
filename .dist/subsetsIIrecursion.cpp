#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int>& nums, vector<int>& ans,
           int index, vector<vector<int>>& result) {

    result.push_back(ans);

    for (int i = index; i < nums.size(); i++) {

        // Skip duplicate elements at the same level
        if (i > index && nums[i] == nums[i - 1]) {
            continue;
        }

        ans.push_back(nums[i]);
        solve(nums, ans, i + 1, result);
        ans.pop_back();
    }
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<int> ans;
    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

    solve(nums, ans, 0, result);

    for (int i = 0; i < result.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}