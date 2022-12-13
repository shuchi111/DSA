//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        vector<int>arr(n , 1);

        

        for(int i=0 ; i < n ; i++){

            if(str[i]=='0'){

                arr[i]=1;

            }

            else{

                arr[i]=-1;

            }

        }

        

        

        vector<int>res;

        int startFrom = 0;

        int st=-1;

        int en=-1;

        

        int currentSum=0;

        int mxSum = INT_MIN;

        

        for(int i=0 ; i < n ; i++){

            currentSum+=arr[i];

            if(mxSum < currentSum){

                mxSum=currentSum;

                st=startFrom;

                en=i;

            }

            

            if(currentSum < 0){

                startFrom = i+1;

                currentSum=0;

            }

        }

        

        

        if(mxSum==-1){

            res.push_back(-1);

            return res;

        }

        

        res.push_back(st+1);

        res.push_back(en+1);

        

        return res;

    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends
