//optimal approach

#include<iostream>
#include<vector>
using namespace std;

vector<int>Rearrangebysign(vector<int>A) {
    int n = A.size();

    //define array for storing the ans arr separately
    vector<int>ans(n,0);
    
    //positive elements start from 0 and negative from 1
    int posIndex = 0, negIndex = 1;
    for(int i = 0; i < n; i++) {

        //fill negative elements in odd indices and increase by 2
        if(A[i] < 0) {
            ans[negIndex] = A[i];
            negIndex += 2;
        }
        else {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
    }
    
    return ans;
}

int main() {
  int n;
  cout << "enter no. of elements:";
  cin >> n; 
  vector<int> A(n); 
    for (int i = 0; i < n; i++) {
        cin >> A[i]; 
    }
    vector<int> ans = Rearrangebysign(A);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}

//Time Complexity: O(N)
//Space Complexity: O(N)