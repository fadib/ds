#include <iostream>
#include <queue>
using namespace std;

void BFS(vector<vector<int>> A, int start, int length) {
    queue<int> q;
    vector<int> visited(length, 0);
    int i = start;
    
    cout << i << ",";
    visited[i] = 1;
    q.push(i);
    
    while (!q.empty()) {
        i = q.front();
        q.pop();
        
        for (int j = 0; j < length; j++) {
            if (A[i][j] == 1 && visited[j] == 0) {
                cout << j << ",";
                visited[j] = 1;
                q.push(j);
            }
        }
    }
    
    cout << endl;
}