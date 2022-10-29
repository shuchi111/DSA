//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
public:
vector<vector<string>> displayContacts(int n, string contact[], string s)
   {
       // code here
       sort( contact , contact+n ) ;
       vector<vector<string>>v ;
       
       for( int i = 0 ; i<s.size() ; i++ ) // Traversing the querry s
       {
           string temp = s.substr( 0 , i+1 ) ; // first temp has g
           set<string>a ;
           
           for( int j = 0 ; j<n ; j++ )  // For each extra letter eg:- g,ge,gee,geei...
           {
               string b = contact[j].substr( 0 , i+1 ) ; //
               if( b == temp ) // temp=g and b=g so all three of them gets inserted in set
               {
                   a.insert(contact[j]) ;// insert all the one's with same prefix
               }
           }
           
           if(!a.empty())
           {
               vector<string>c( a.begin() , a.end() ) ;
               v.push_back(c) ;
           }
           else{
               v.push_back({"0"}) ;
           }
       }
       
       return v ;
   }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
