class Solution {
public:
    bool check(vector<int>& nums) {
        int n =  nums.size();
        int breaks = 0;
        for(int i = 1 ; i<n; i++){
            if(nums[i-1] > nums[i]){
                breaks +=1;
            }
        }
        if(breaks ==0){
            return true;
        }
        if(breaks == 1 && nums[n-1] <= nums[0]){
            return true;
        }
        return false;
        
    }
};