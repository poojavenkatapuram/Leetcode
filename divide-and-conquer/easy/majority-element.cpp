class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = nums[0];
        int counter = 1;
        for(int i = 0; i<n; i++){
            if(nums[i]== candidate){
                counter++;
                candidate = nums[i];

            }
            else{
                counter--;
                if(counter == 0){
                    candidate = nums[i];
                    counter++;
                }
            }
        }
        return candidate;
        
    }
};