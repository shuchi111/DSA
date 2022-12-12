#User function Template for python3

import sys
sys.setrecursionlimit(10**6)

class Solution:
    def __init__(self):
        self.time = 0
    
    #Function to return Breadth First Traversal of given graph.
    def articulationPoints(self, V, adj):
        dist = [-1] * V
        low = [-1] * V
        parent = [-1] * V
        ap = [False] * V
        res = []
        
        for i in range(V):
            if dist[i] == -1:
                self.dfs(i,dist,low,parent,ap,adj)
                
        for i in range(V):
            if ap[i] == True:
                res.append(i)
                
        if len(res) == 0: 
            return [-1]
            
        return res
                
    def dfs(self, u, dist, low, parent, ap, adj):
        dist[u] = self.time
        low[u] = self.time
        self.time += 1
        children = 0
        
        for v in adj[u]:
            if dist[v] == -1:
                children += 1
                parent[v] = u
                self.dfs(v, dist, low, parent, ap, adj)
                low[u] = min(low[u], low[v])
                
                # if u is the root
                if parent[u] == -1 and children > 1:
                    ap[u] = True
                    
                if parent[u] != -1 and low[v] >= dist[u]:
                    ap[u] = True
                    
            elif v != parent[u]:
                low[u] = min(low[u], dist[v])

 
 


#{ 
 # Driver Code Starts
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		V, E = map(int, input().split())
		adj = [[] for i in range(V)]
		for _ in range(E):
			u, v = map(int, input().split())
			adj[u].append(v)
			adj[v].append(u)
		ob = Solution()
		ans = ob.articulationPoints(V, adj)
		for i in range(len(ans)):
		    print(ans[i], end = " ")
		print()
        

# } Driver Code Ends
