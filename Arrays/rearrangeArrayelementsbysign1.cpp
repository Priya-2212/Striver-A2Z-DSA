//brute force approach

#include<iostream>
#include<vector>

using namespace std;

vector<int>Rearrangebysign(vector<int>A, int n) {
      //vectors for storing positives and negatives separately 
      vector<int>pos;
      vector<int>neg;
       
      //storing positives in pos and negatives in neg
      for(int i = 0; i < n; i++) {
        if(A[i] > 0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
      }

      //storing elements back in original arr positives on even indices and negatives on odd indices
      for(int i = 0; i < n/2 ; i++) {
        A[2*i] = pos[i];
        A[2*i + 1] = neg[i];
      }
    return A;
}
int main() {
  int n;
  cout << "enter no. of elements:";
  cin >> n; 
  vector<int> A(n); 
    for (int i = 0; i < n; i++) {
        cin >> A[i]; 
    }
    vector<int> ans = Rearrangebysign(A, n);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}

//Time Complexity: O(N)+O(N/2)
//Space Complexity: O(N)