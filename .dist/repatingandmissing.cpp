#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    int n = grid.size();
    long long N = 1LL * n * n;

    long long expectedSum = N * (N + 1) / 2;
    long long expectedSqSum = N * (N + 1) * (2 * N + 1) / 6;

    long long actualSum = 0, actualSqSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long val = grid[i][j];
            actualSum += val;
            actualSqSum += val * val;
        }
    }

    long long diff = actualSum - expectedSum;
    long long sqDiff = actualSqSum - expectedSqSum;

    long long sumAB = sqDiff / diff;

    int repeating = (diff + sumAB) / 2;
    int missing = repeating - diff;

    cout << "Repeating: " << repeating << endl;
    cout << "Missing: " << missing << endl;

    return 0;
}