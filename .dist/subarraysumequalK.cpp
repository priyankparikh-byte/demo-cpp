
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (mp.find(sum - k) != mp.end()) {
            count += mp[sum - k];
        }

        mp[sum]++;
    }

    cout << count << endl;

    return 0;
}
