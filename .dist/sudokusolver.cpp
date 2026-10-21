
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
    for (int i = 0; i < 9; i++) {
        // Check row
        if (board[row][i] == num)
            return false;

        // Check column
        if (board[i][col] == num)
            return false;

        // Check 3x3 box
        int r = 3 * (row / 3) + i / 3;
        int c = 3 * (col / 3) + i % 3;

        if (board[r][c] == num)
            return false;
    }

    return true;
}

bool solve(vector<vector<char>>& board) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {

            if (board[row][col] == '.') {
                for (char num = '1'; num <= '9'; num++) {

                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num;

                        if (solve(board))
                            return true;

                        // Backtrack
                        board[row][col] = '.';
                    }
                }

                return false;
            }
        }
    }

    return true;
}

int main() {
    vector<vector<char>> board(9, vector<char>(9));

    // Input: 9 rows, each containing 9 characters
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    if (solve(board)) {
        cout << "Solved Sudoku:\n";

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "No solution exists\n";
    }

    return 0;
}
