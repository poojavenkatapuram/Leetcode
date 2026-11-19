class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> ans;
        int st=0;
        int end = n-1;
        int index = -1;
        while(st<= end){
            int mid = st+(end-st)/2;
            if(nums[mid] ==  target ){
                index = mid;
                break;
            }
            else if(nums[mid]< target){
                st = mid+1;
            }
            else if(nums[mid]> target){
                end =mid-1;
            }
        }
        if(index == -1){
            return {-1,-1};

        }
        int spos =index;
        int epos =index;
        st = 0;
        end = index-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                spos = mid;
                end=mid-1;
            }
            else if(nums[mid]< target){
                st =mid+1;
            }
            else if(nums[mid]> target){
                end =mid-1;
            }
        }
        st= index+1;
        end =n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]== target){
                epos =mid;
                st = mid+1;
            }
            else if(nums[mid]<target){
                st = mid+1;
            }
            else if(nums[mid]> target){
                end=mid-1;
            }
        }
        ans.push_back(spos);
        ans.push_back(epos);

        return ans;
        
    }
};