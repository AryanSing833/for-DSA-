class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();
        int total = r * c;

        vector<vector<int>> ans(r, vector<int>(c));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int old = i * c + j;
                int New = (old + k) % total;

                int row = New / c;
                int col = New % c;

                ans[row][col] = grid[i][j];
            }
        }

        return ans;
    }
};