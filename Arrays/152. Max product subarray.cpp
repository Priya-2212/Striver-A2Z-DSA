//https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = INT_MIN;
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                int prod = 1;
                for(int k=i;k<=j;k++) {
                    prod *= nums[k];
                }
            
            result = max(result,prod);    
            }
        }
    return result;
    }
};
