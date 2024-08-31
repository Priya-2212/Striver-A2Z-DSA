#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; //no. of elements in array
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //precompute- in which hash array will be made
    int hash[16]={0};
    for(int i=0; i<n; i++){
        hash [arr[i]] += 1;
    }
    int q; //no. of queries
    cin >> q;

    while(q--){
        int number;
        cin >> number;
        cout << hash[number]<<endl; //fetching
    }
    return 0;
}
