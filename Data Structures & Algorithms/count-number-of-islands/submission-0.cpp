class Solution {
public:
    void dfs(int i, int j, int m, int n, vector<vector<char>> &grid, vector<vector<bool>> &visited){
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0' || visited[i][j]){
            return;
        }
        visited[i][j] = true;
        vector<int> dx = {1, -1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};
        for(int index = 0; index < 4; index++){
            dfs(i + dx[index], j + dy[index], m, n, grid, visited);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<bool>> visited(m, vector<bool> (n, false));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    dfs(i, j, m, n, grid, visited);
                    count += 1;
                }
            }
        }
        return count; 
    }
};
