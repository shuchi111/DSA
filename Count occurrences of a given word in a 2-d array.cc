//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//class Solution{
  //  public:
    //int findOccurrence(vector<vector<char> > &mat, string target){
        
      class Solution
{
          public:

    

    int solve(int i, int j,vector<vector<char> > &mat, string target, int n,int idx ){

         

          int count = 0;

        

        // these are the boundary conditions

        // see it like this we take starting position of string say idx and mat[i][j] is the starting pos of mat

        // compare both of them, if we found a char we will store it and we will update that char with 0 to avoid looping 

        // now move forward and update idx.. if our idx reaches end of string means we have found out the word and increase the counter n return that

        // else search in all four directions.

        if(i>=0 && j>=0 && i<mat.size() && j<mat[0].size() && target[idx] == mat[i][j]){

            char temp = target[idx];

            mat[i][j] = 0;

            idx += 1;

            if(idx == n){

                count = 1;

            }

            else{

                count += solve(i+1,j,mat,target,n,idx);

                count += solve(i-1,j,mat,target,n,idx);

                count += solve(i,j+1,mat,target,n,idx);

                count += solve(i,j-1,mat,target,n,idx);

            }

            

            // why we are back tracking here is to search all the possible counters of a word.. If we don't, the counter will always be one.. 

            mat[i][j] = temp; // backtrack

        }

        

       return count; 

    }

    int findOccurrence(vector<vector<char> > &mat, string target){

        

        // this can be understood easily

        int ans = 0;

        int n = target.size();

        for(int i=0; i<mat.size(); i++){

            for(int j=0; j<mat[0].size(); j++){

                ans += solve(i,j,mat,target,n,0);

            }

        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends
