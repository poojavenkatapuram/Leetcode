class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m = matrix[0].size();

        bool firstrow = false;
        bool firstcolumn = false;
       //checking first row for that we need iterate vertically
        for(int j = 0; j<m ; j++){
           if( matrix[0][j]== 0){
           firstrow = true;
           }
        }
        for(int i = 0; i<n ; i++){
            if(matrix[i][0]== 0){
                firstcolumn = true;
            }
        }
        //mark the positions
        for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]= 0;
                    matrix[0][j]= 0;
                }
            }
        }
        //now convert those position into 0
        for(int i = 1;i<n; i++){
            for(int j = 1; j<m; j++){
                if(matrix[i][0]==0
                ||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstrow){
            for(int j = 0; j<m; j++){
                matrix[0][j]=0;
            }
        }
        if(firstcolumn){
            for(int i= 0; i<n ;i++){
                matrix[i][0]= 0;
            }
        }
        
    }
};