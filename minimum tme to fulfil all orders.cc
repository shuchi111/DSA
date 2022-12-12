//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findMinTime(int N, vector<int>&A, int L){
        //write your code here
          vector<int>ans;

        for(auto it:A){

            int ele=it;

            ans.push_back(it);

            for(int i=2;i<=N;++i){

                int x=ans.back()+(i*ele);

                ans.push_back(x);

            }

        }

        sort(ans.begin(),ans.end());

        return ans[N-1];



    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int l;
	    cin >> l;
	    vector<int>arr(l);
	    for(int i = 0; i < l; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    int ans = ob.findMinTime(n, arr, l);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends
