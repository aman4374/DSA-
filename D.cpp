#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Function to count blocks to remove
int countBlocksToRemove(const vector<vector<int>>& matrix, int N, int M, int K) {
    set<int> blocksToRemove;
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    // Find positions of block K
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matrix[i][j] == K) {
                // Check all blocks above this position in the same column
                for (int x = i - 1; x >= 0; --x) {
                    if (!visited[x][j]) {
                        blocksToRemove.insert(matrix[x][j]);
                        visited[x][j] = true;
                    }
                }
                // Also check horizontally adjacent columns
                for (int col = 0; col < M; ++col) {
                    if (col != j) { // Avoid checking the same column
                        for (int x = i - 1; x >= 0; --x) {
                            if (!visited[x][col]) {
                                blocksToRemove.insert(matrix[x][col]);
                                visited[x][col] = true;
                            }
                        }
                    }
                }
            }
        }
    }

    // Remove K itself from the set if it's present
    blocksToRemove.erase(K);
    
    return blocksToRemove.size();
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> matrix(N, vector<int>(M));
    
    // Read the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    int K;
    cin >> K;

    // Get the result and print it
    int result = countBlocksToRemove(matrix, N, M, K);
    cout << result ;

    return 0;
}