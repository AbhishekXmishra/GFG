//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
       unordered_set<int> sumSet;
    int sum = 0;

    // Traverse through the array
    for (int i = 0; i < n; i++) {
        // Add the current element to the sum
        sum += arr[i];

        // If the cumulative sum is 0, or it's already present in the set,
        // or if the current element itself is 0, we found a subarray with sum 0
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
            return true;
        }

        // Insert the cumulative sum into the set
        sumSet.insert(sum);
    }

    // If no subarray with sum 0 is found
    return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends