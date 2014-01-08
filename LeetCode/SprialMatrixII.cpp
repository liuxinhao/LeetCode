// 一共有n/2层，每层的上，右，下，左分别处理
class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        int layer = n / 2;
        vector<vector<int> > matrix(n,vector<int>(n,1));
        int val = 1;
        for(int i = 0; i <= layer; i++){
            
            //top line
            for(int j = i; j < n - i;j++)
            {
                matrix[i][j] = val++;
            }
            
            //right line
            for(int j = i+1; j < n  - i; j++){
                matrix[j][n-1-i] = val++;
            }
            
            //bottom line
            for(int j = n - 2 - i; j >= i; j--){
                matrix[n-1-i][j] = val++;
            }
            
            //left line
            for(int j = n - 2 - i; j > i; j--){
                matrix[j][i] = val++;
            }
        }
        return matrix;
    }
};
