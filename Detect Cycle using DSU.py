def detectCycle(self, V, adj):
		parent = list(range(V))
		rank = [1] * V
        	
        def find(u):
            root = u
            while root != parent[root]:
                root = parent[root]
            # Updating the path
            while u != root:
                u, parent[u] = parent[u], root
            return root
        
        def union(u, v):
            u_root = find(u)
            v_root = find(v)
            if u_root == v_root:
                return u_root
            # Make sure u_root points to the bigger set
            if rank[u_root] < rank[v_root]:
                u_root, v_root = v_root, u_root
            parent[v_root] = u_root
            rank[u_root] += rank[v_root]
            return u_root
        
        for u in range(V):
            # Edges might repeat in the adjacency list
            # using set() to eliminate the duplicates.
            for v in set(adj[u]):
                if v < u:
                    continue
                u_root = find(u)
                v_root = find(v)
                if u_root == v_root:
                    return 1
                union(u_root, v_root)
        
        return 0
