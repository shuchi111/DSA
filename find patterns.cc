//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++


 class Solution{   

    public:

 

    int numberOfSubsequences(string s, string t)

    {

        int ans = 0;

        

        while(1)

        {

            int it = 0;

            

            for(int i = 0; i < s.size(); i++)

            {

                if(s[i]==t[it])

                {

                    s[i] = ' ';

                    it++;

                }

                

                if(it==t.size()) break;

            }  

            if(it==t.size()) ans++;

            else break;

        }

        return ans;

    }

};



    


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends
