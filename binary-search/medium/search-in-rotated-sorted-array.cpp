class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int pivot;
        int end = n-1;
        if(n==1){ 
            if(nums[0]== target){
              return  0; 
            }
            return -1;
        }
        if(nums[0]< nums[n-1]){
            
            pivot = n-1;
        }
        else{
        while(st<= end){
            int mid = st+(end-st)/2;
            if(mid < n-1 && nums[mid]> nums[mid+1]){
                pivot = mid;
                break;
            }
            else if(nums[mid] >= nums[0]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        }
        if(nums[pivot] == target){
    return pivot;
}

        st = 0;
        end = pivot-1;
        while(st<= end){
            int mid = st+(end-st)/2;
            if(nums[mid]== target){
                return mid;
                
            }
            else if(nums[mid]< target){
                st = mid+1;

            }
            else if(nums[mid]> target){
                end = mid-1;
            }
            
        }
        st= pivot+1;
        end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]== target){
                return mid;
            }
             else if(nums[mid]< target){
                st = mid+1;

            }
            else if(nums[mid]> target){
                end = mid-1;
            }
        }
        return -1;

    }
};