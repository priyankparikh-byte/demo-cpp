
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) {
        return false;
    }

    int m = matrix.size();
    int n = matrix[0].size();

    int sr = 0, er = m - 1;

    while (sr <= er) {
        int midrow = sr + (er - sr) / 2;

        if (target >= matrix[midrow][0] &&
            target <= matrix[midrow][n - 1]) {

            int st = 0, end = n - 1;

            while (st <= end) {
                int mid = st + (end - st) / 2;

                if (target == matrix[midrow][mid]) {
                    return true;
                } 
                else if (target > matrix[midrow][mid]) {
                    st = mid + 1;
                } 
                else {
                    end = mid - 1;
                }
            }

            return false;
        } 
        else if (target > matrix[midrow][n - 1]) {
            sr = midrow + 1;
        } 
        else {
            er = midrow - 1;
        }
    }

    return false;
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter matrix elements in sorted order:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Target found";
    } else {
        cout << "Target not found";
    }

    return 0;
}
