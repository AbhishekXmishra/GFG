//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans(q.size(), 0);
        int size = q.size();
        
        int i = 0;
        // Place first Half elements on even index
        while(i<size){
            ans[i] = q.front();
            q.pop();
            i+=2;
        }
        
        // Place second half elements on Odd indexes
        i = 1;
        while(!q.empty()){
            ans[i] = q.front();
            q.pop();
            i += 2;
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends