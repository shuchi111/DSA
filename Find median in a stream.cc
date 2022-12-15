//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution
{
    public:
    priority_queue<int> lo;
    priority_queue<int, vector<int>, greater<int>> hi;
    void insertHeap(int &x) {
        lo.push(x);
        hi.push(lo.top()); lo.pop();
        if(lo.size()<hi.size()) {
            lo.push(hi.top());
            hi.pop();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps() {
        
    }
    
    //Function to return Median.
    double getMedian() {
        double ans;
        int n=lo.size()+hi.size();
        if(n&1) {
            ans=lo.top();
        }
        else {
            ans=(lo.top()+hi.top());
            ans=ans/2.0;
        }
        return ans;
    }
};
 




//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends
