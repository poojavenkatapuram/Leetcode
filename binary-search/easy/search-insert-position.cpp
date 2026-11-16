class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int position;
        int end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]< target){
                st = mid+1;
                position = st;
            }
            else if(nums[mid]> target){
                end= mid-1;
                position = end;
            }
            else{

                position = mid;
                return position;
            }
        }
        return -1;
        
    }
};