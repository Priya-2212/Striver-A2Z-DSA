//https://leetcode.com/problems/combination-sum-ii/submissions/1541967264/


class Solution {
private:
    void findCombinations(int ind, vector<int>& arr, int target, vector<vector<int>>& ans, vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) continue; 

            if (arr[i] > target) break; 

            ds.push_back(arr[i]);
            findCombinations(i + 1, arr, target - arr[i], ans, ds);
            ds.pop_back(); 
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, candidates, target, ans, ds);
        return ans;
    }
};


//optimal

class Solution {
public:
void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    if (arr[i] > target) break;
    ds.push_back(arr[i]);
    findCombination(i + 1, target - arr[i], arr, ans, ds);
    ds.pop_back();
  }
}
vector < vector < int >> combinationSum2(vector < int > & candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector < vector < int >> ans;
    vector < int > ds;
    findCombination(0, target, candidates, ans, ds);
    return ans;
    }
};
