class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m = matrix[0].size();
        int srow = 0;
        int erow = n-1;
        int scol =0;
        int ecol= m-1;
        vector<int> res;
        while(srow<= erow && scol <= ecol){
            for(int j = scol ; j<=ecol; j++){
                res.push_back(matrix[srow][j]);
            }
            srow++;
            for(int i = srow; i<=erow; i++){
                res.push_back(matrix[i][ecol]);
            }
            ecol--;
            if(srow<= erow){
                for(int j = ecol; j>=scol; j--){
                    res.push_back(matrix[erow][j]);
                }
                erow--;
            }
            if(scol<= ecol){
                for(int i = erow; i>= srow; i--){
                    res.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }
        return res;
        
    }
};