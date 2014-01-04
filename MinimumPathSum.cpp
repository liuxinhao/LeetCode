//动态规划,当前节点的最小path由其前面2个中较小的决定

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int row = grid.size();
        int col = grid[0].size();
        if (row == 0 || col == 0) return 0;
        int minpath[row][col];
        minpath[0][0] = grid[0][0];
        
        for(int i = 1; i < row; i++){
            minpath[i][0] = minpath[i-1][0] + grid[i][0];
        }
        for(int j = 1; j < col; j++){
            minpath[0][j] = minpath[0][j-1] + grid[0][j];
        }
        for(int i = 1; i < row; i++ ){
            for(int j = 1; j < col; j++){
                minpath[i][j] = std::min(minpath[i-1][j],minpath[i][j-1])+grid[i][j];
            }
        }
        return minpath[row-1][col-1];
        
    }
};
