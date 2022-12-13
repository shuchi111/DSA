//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string str){
        //Write your code here
        
        string revStr = "";
        int n = str.length();
        for(int i = n - 1; i >= 0; i--){
            revStr += str[i];
        }
    
        vector<int> lps(2*n , 0);
        int len = 0;
        int i = 1;
        while(i < n){
            if(str[i] == str[len]){
                ++len;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len - 1];
                }
                else{
                    i++;
                }
            }
        }
        i = 0;
        len = 0;
        while(i < n){
            if(revStr[i] == str[len]){
                lps[i + n] = ++len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len - 1];
                }
                else{
                    i++;
                }
            }
        }
        return n - lps[2*n - 1];
    }


};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
