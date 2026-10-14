#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int r = 0, c = n - 1;

    while (r < m && c >= 0) {
        if (target == matrix[r][c]) {
            return true;
        }
        else if (target < matrix[r][c]) {
            c--;
        }
        else {
            r++;
        }
    }

    return false;
}

int main() {
    int m, n, target;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}