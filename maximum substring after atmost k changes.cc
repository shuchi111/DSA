//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    int ans = 0,start = 0,temp = k,n = s.size();
		    for(int j = 0; j<26; j++){
		        char c = char('A'+j);
		        int cnt = 0,k = temp; start = 0;
		        for(int i = 0; i<n;){
		            while(i<n){
		                if(s[i]==c){
		                    cnt++;
		                }
		                else if(k>0){
		                    k--;
		                    cnt++;
		                }
		                else{
		                    break;
		                }
		                i++;
		                ans = max(ans,cnt);
		            }
		            while(start<n && k<=0){
		                if(s[start]!=c){
		                    k++;
		                }
		                cnt--;
		                start++;
		            }
		        }
		        k = temp;
		    }
		    return ans;
		}

};
 

        

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
