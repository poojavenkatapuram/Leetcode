class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxiProduct = nums[0];
        int miniProduct = nums[0];
        int maximum_product=nums[0];

        for(int i = 1; i<nums.size() ; i++){
            int prevMax = maxiProduct;
            int prevMin = miniProduct;
            
            maxiProduct = max({nums[i], nums[i]*prevMax, nums[i]*prevMin});
            miniProduct = min({nums[i], nums[i]*prevMax, nums[i]*prevMin});
            maximum_product = max(maxiProduct, maximum_product);
                   
                   }
        return maximum_product;
        
    }
};