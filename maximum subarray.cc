//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	   int ans = INT_MIN;
	    int startIndex = 0;
	    int endIndex = 0;
	    int currIndex = 0;
	    int curr = INT_MIN;
	    for(int i = 0; i < n; i++){
	        if(a[i] < 0){
	            curr = INT_MIN;
	            continue;
	        }
	        else if(curr == INT_MIN){
	            curr = a[i];
	            currIndex = i;
	            if(curr > ans){
	                ans = curr;
	                startIndex = i;
	                endIndex = i;
	            }
	        }
	        else{
	            curr += a[i];
	            if(curr > ans || (curr == ans && (i - currIndex > endIndex - startIndex))){
	                ans = curr;
	                startIndex = currIndex; 
	                endIndex = i;
	            }
	        }
	    }
	    vector<int> res;
	    if(ans == INT_MIN){
	        res.push_back(-1);
	        return res;
	    }
	    for(int i = startIndex; i <= endIndex; i++){
	        res.push_back(a[i]);
	    }
	    return res;

	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends
