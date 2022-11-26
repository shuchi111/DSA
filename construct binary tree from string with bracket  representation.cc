//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
           map<Node*,pair<Node*,int>> mpp;
       int flag=0;
       int i=0;
       string num="";
       
       while(i<str.size() && str[i]!='(' && str[i]!=')')
       {
           num.push_back(str[i]);
           i++;
       }
       Node* root=new Node(stoi(num));
       Node* p=root;
       
       mpp[root]=make_pair(root,0);
       
       while(i<str.size())
       {
           if(str[i]=='(')
           {
               i++;
               flag=1;
           }
           else if(str[i]==')')
           {
              if(flag==2)
              {
                 p=mpp[p].first;
                 i++;
              }
              else
              {
                 if(mpp[p].second==0)
                 {
                   p->left=NULL;
                   mpp[p].second=1;
                 }
                 else
                 {
                  p->right=NULL; 
                 }
                 i++;
              }
           }
           else
           {
               flag=2;
               num="";
               num.push_back(str[i]);
               i++;
               while(i<str.size() && str[i]!='(' && str[i]!=')')
               {
                   num.push_back(str[i]);
                   i++; 
               }
               Node* temp=new Node(stoi(num));
               mpp[temp]=make_pair(p,0);
               if(mpp[p].second==0)
               {
                  p->left=temp;
                  mpp[p].second=1;
               }
               else
               {
                  p->right=temp; 
               }
               p=temp;
           }
       }
       return root;
   
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
