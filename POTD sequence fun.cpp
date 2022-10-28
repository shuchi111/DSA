//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		      int ans=1, m=1e9+7;
		    for(int i=1;i<=n;i++)
		    ans=(ans*(long long)i+1)%m;
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
