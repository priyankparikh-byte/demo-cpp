#include <iostream>
#include <vector>
using namespace std;

void getAllCombinations(vector<int>& arr, int idx, int tar,
                        vector<vector<int>>& ans,
                        vector<int>& combin) {

    // Base case
    if (tar == 0) {
        ans.push_back(combin);
        return;
    }

    if (idx == arr.size() || tar < 0) {
        return;
    }

    // Single: Pick the current element
    combin.push_back(arr[idx]);

    // Same index because we can reuse the element
    getAllCombinations(arr, idx, tar - arr[idx], ans, combin);

    // Backtracking
    combin.pop_back();

    // Multiple: Skip the current element
    getAllCombinations(arr, idx + 1, tar, ans, combin);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> combin;

    getAllCombinations(candidates, 0, target, ans, combin);

    return ans;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(candidates, target);

    for (auto &v : result) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}