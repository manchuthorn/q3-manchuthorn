#include<iostream>
#include<vector>
using namespace std;

class Graph {
    vector<vector<int>> edges;
    int s_v;

public:
    Graph(int n) : s_v(n), edges(n, vector<int>(n, 0)) {}

    void add_edge(int x, int y, int w) {
        edges[x][y] = w;
    }

    void print() {
        for (int i = 0; i < s_v; ++i) {
            cout << i << " : ";
            for (int j = 0; j < s_v; ++j) {
                if (edges[i][j] > 0) {
                    cout << j << "," << edges[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    void bfs(int start) {
        vector<bool> visited(s_v, false);
        vector<int> q = {start};
        visited[start] = true;

        while (!q.empty()) {
            int node = q[0];
            q.erase(q.begin());
            cout << node << " ";

            for (int y = 0; y < s_v; ++y) {
                if (edges[node][y] > 0 && !visited[y]) {
                    q.push_back(y);
                    visited[y] = true;
                }
            }
        }
        cout << endl;
    }

    void dfs_helper(int start, vector<bool>& visited) {
        visited[start] = true;
        cout << start << " ";

        for (int y = 0; y < s_v; ++y) {
            if (edges[start][y] > 0 && !visited[y]) {
                dfs_helper(y, visited);
            }
        }
    }

    void dfs(int start) {
        vector<bool> visited(s_v, false);
        dfs_helper(start, visited);
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Graph g(n);
    char cmd;

    while (cin >> cmd) {
        if (cmd == 'e') {
            int a, b, c;
            cin >> a >> b >> c;
            g.add_edge(a, b, c);
        } else if (cmd == 'd') {
            int a;
            cin >> a;
            g.dfs(a);
        } else if (cmd == 'b') {
            int a;
            cin >> a;
            g.bfs(a);
        } else if (cmd == 'q') {
            break;
        }
    }

    return 0;
}

