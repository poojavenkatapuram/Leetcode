class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate1 = 0, candidate2 = 0;
        int counter1 = 0, counter2 = 0;
        vector<int> res;
        for(int i = 0; i<n ; i++){
            if(counter1>0 && nums[i]== candidate1){
                counter1++;
            }
            else if(counter2> 0&& nums[i] == candidate2){
                counter2++;
            }
            else if(counter1 == 0){
                candidate1 = nums[i];
                counter1 = 1;
            }
            else if(counter2 == 0){
                candidate2 = nums[i];
                counter2 = 1;
            }
            else{
                counter1--;
                counter2--;
            }
        }
        counter1 = 0;
        counter2= 0;
        for(int num : nums){
            if(num == candidate1)counter1++;
            else if(num == candidate2)counter2++;
        }
        if(counter1> n/3){
            res.push_back(candidate1);
        }
         if(counter2 > n/3){
            res.push_back(candidate2);
        }
        return res;
        
    }
};