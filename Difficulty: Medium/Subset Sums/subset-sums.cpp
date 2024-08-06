//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends




class Solution {
    public:
    void solve(int ind , vector<int> op , vector<int>& ans , int sum , vector<int> &arr , int n){
       if(ind == n){
           ans.push_back(sum);
           return ;
       }
        op.push_back(arr[ind]);
        solve(ind + 1 , op , ans , sum + arr[ind] , arr , n );
        op.pop_back();
        solve(ind + 1 , op , ans , sum , arr , n );
    }
  public:
    vector<int> subsetSums(vector<int> arr, int n) {
       int sum = 0 ;
       vector<int> op ;
       vector<int> ans;
       solve(0 , op , ans , sum , arr , n);
       return ans; 
    }
};






//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends