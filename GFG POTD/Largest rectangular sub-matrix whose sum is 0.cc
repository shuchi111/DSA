/*

Algorithm:

Input:
Accept a 2D matrix a as input.

Initialize Variables:
Initialize variables n and m to represent the number of rows and columns in matrix a.
Initialize variables area, x1, x2, y1, and y2 to keep track of the maximum submatrix with a sum of zero.

Iterate Over Columns:
Iterate over columns l from 0 to m-1.
For each column l, create a 1D array arr to store the cumulative sum of elements in the corresponding columns.

Iterate Over Rows:
For each column range [l, r]:
Compute the cumulative sum of elements in each row using the array arr.
Use the Kadane's algorithm to find the maximum subarray with a sum of zero.
Update the maximum submatrix coordinates if a larger area is found.

Construct Result Matrix:
If no submatrix with a sum of zero is found, return an empty matrix.
Construct the result matrix ans by extracting the submatrix using the coordinates x1, x2, y1, and y2.

Output:
Return the result matrix ans.

*/



//Solution
class Solution{
  public:
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      //Code Here
        int n=a.size(),m=a[0].size();
      int area=0,x1=-1,x2=-1,y1=-1,y2=-1;
      for(int l=0;l<m;l++){
          vector<int>arr(n);
          for(int r=l;r<m;r++){
              for(int i=0;i<n;i++){
                  arr[i]+=a[i][r];
              }
              unordered_map<int,int>mp;mp[0]=-1;
              int sum=0,len=0,s=-1,e=-1;
              for(int i=0;i<n;i++){
                  sum+=arr[i];
                  if(mp.find(sum)!=mp.end()){
                     if(len<i-mp[sum]){
                         len=i-mp[sum];
                         e=i;
                         s=mp[sum]+1;
                     }
                  }
                  else mp[sum]=i;
              }
              if(area<len*(r-l+1)){
                  area=len*(r-l+1);
                  y1=l;y2=r;
                  x1=s;x2=e;
              }
          }
      }
      vector<vector<int>> ans;
      if(x1==-1||x2==-1||y1==-1||y2==-1) return ans;
      for(int i=x1;i<=x2;i++){
          vector<int>temp;
          for(int j=y1;j<=y2;j++){
              temp.push_back(a[i][j]);
          }
          ans.push_back(temp);
      }
      return ans;
  }
};
