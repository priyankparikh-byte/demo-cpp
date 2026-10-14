
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int n = matrix.size();
    int m = matrix[0].size();

    int startRow = 0, startCol = 0;
    int endRow = n - 1, endCol = m - 1;

    while (startRow <= endRow && startCol <= endCol) {

        // Top row
        for (int j = startCol; j <= endCol; j++) {
            ans.push_back(matrix[startRow][j]);
        }

        // Right column
        for (int i = startRow + 1; i <= endRow; i++) {
            ans.push_back(matrix[i][endCol]);
        }

        // Bottom row
        for (int j = endCol - 1; j >= startCol; j--) {
            if (startRow == endRow) break;
            ans.push_back(matrix[endRow][j]);
        }

        // Left column
        for (int i = endRow - 1; i > startRow; i--) {
            if (startCol == endCol) break;
            ans.push_back(matrix[i][startCol]);
        }

        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans = spiralOrder(matrix);

    // Print spiral order
    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}