
//CC150 上的题，关键是从矩阵的最外一层开始，每一层做一个4向交换

class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        
        int n = matrix.size();
        for(int layer = 0; layer < n / 2; ++layer){
            int first = layer;
            int last = n - 1 - layer;
            for(int i = first; i < last; ++i){
                int offset = i - first;
                int top = matrix[first][i];
                
                matrix[first][i] = matrix[last-offset][first];
                matrix[last-offset][first] = matrix[last][last-offset];
                matrix[last][last-offset] = matrix[i][last];
                matrix[i][last] = top;
            }
        }
       
        
    }
};
