//follow up ques solved using brute force approach

#include<iostream>
#include<vector>
using namespace std;

vector<int>Rearrangebysign(vector<int> A, int n) {
    vector<int>pos;
    vector<int>neg;

    for(int i = 0; i < n; i++) {
        if(A[i] > 0) 
            pos.push_back(A[i]);
        else 
            neg.push_back(A[i]);
        }
        //if positive are lesser than negatives
        if(pos.size() < neg.size()) {
            //first fill arr alternatively till the point where positives and negatives are equal in size
            for(int i = 0; i < pos.size(); i++) {
                A[2*i] = pos[i];
                A[2*i+1] = neg[i];
            }
            //fill remaining negative at end of array
            int index = pos.size()*2;
            for(int i = pos.size(); i < neg.size(); i++) {
                A[index] = neg[i];
                index++ ;
            }
        }
        else{
            for(int i = 0; i < neg.size(); i++) {
                A[2*i] = pos[i];
                A[2*i+1] = neg[i];
            }
            int index = neg.size()*2;
            for(int i = neg.size(); i < pos.size(); i++) {
                A[index] = pos[i];
                index++ ;
            }
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

//Time Complexity: O(2N)
//Space Complexity: O(N)
