class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       
        int n = grid.size();
        int m = grid[0].size();
         int N= n*n;
        vector<int> ans;
        unordered_map<int,int> mp;
        int missing_number, repeating_number=0;
        int actual_sum = 0;
        int expected_sum = N *(N+1)/2;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                mp[grid[i][j]]++;
                actual_sum+= grid[i][j];

                if(mp[grid[i][j]]> 1){
                    repeating_number = grid[i][j];
                }
            }
            

        }
        missing_number = expected_sum - actual_sum+ repeating_number;
            ans.push_back(repeating_number);
            ans.push_back(missing_number);

            return ans;


        
        
    }
};