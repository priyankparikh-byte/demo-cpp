
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {
    // Check upper column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void solve(vector<string>& board, int row, int n) {
    // All queens have been placed
    if (row == n) {
        for (int i = 0; i < n; i++) {
            cout << board[i] << endl;
        }
        cout << endl;
        return;
    }

    // Try each column in the current row
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';

            solve(board, row + 1, n);

            // Backtrack
            board[row][col] = '.';
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> board(n, string(n, '.'));

    solve(board, 0, n);

    return 0;
}
