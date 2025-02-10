//https://leetcode.com/problems/subsets/submissions/1538192186/


class Solution {
public:
    void printSubseq(int ind, vector<int>& nums, vector<int>& arr, vector<vector<int>>& result) {
        if (ind == nums.size()) {  
            result.push_back(arr);
            for (auto it : arr) { 
                cout << it << " ";
            }
            if (arr.size() == 0) {
                cout << "[]";
            }
            cout << endl;
            return;
        }

        // Pick the index 
        arr.push_back(nums[ind]);
        printSubseq(ind + 1, nums, arr, result);
        arr.pop_back(); 

        // Not pick
        printSubseq(ind + 1, nums, arr, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> arr;
        printSubseq(0, nums, arr, result); 
        return result;
    }
};

//TC -> O(2^N)
//SC -> O(N)
