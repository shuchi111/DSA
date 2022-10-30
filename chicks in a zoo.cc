//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
#define ll long long int
ll getChicks(int n)
{
    //size has to be 6 atleast cause a chick lifeexpectancy is 6days atleast
    int size = max(n, 7);
    ll dp[size];
    dp[0] = 0;
    dp[1] = 1;
    // Every day current population
    // will be three times of the previous day
    for (int i = 2; i <= 6; i++) {
        dp[i] = dp[i - 1] * 3;
    }
    //Calculated value
    dp[7] = 726;
    // From 8th day onwards
    for (int i = 8; i <= n; i++) {
        dp[i] = (dp[i - 1] - (2 * dp[i - 6] / 3)) * 3;
    }
    return dp[n];
}

	long long int NoOfChicks(int n){
	    // Code here
	    return getChicks(n);
	}
};




//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
