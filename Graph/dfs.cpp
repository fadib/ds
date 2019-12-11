#include <iostream>
#include <queue>
using namespace std;

void DFS(vector<vector<int>> A, int start, int length) {
    static vector<int> visited(length, 0);
    
    if (visited[start] == 0) {
        cout << start << ",";
        visited[start] = 1;
        for (int j = 0; j < length; j++) {
            if (A[start][j] == 1 && visited[j] == 0) {
                DFS(A, j, length);
            }
        }
    }
}