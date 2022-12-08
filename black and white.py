def numOfWays(M, N):
    MOD = 10**9 + 7
    attacking = 0
    for i in range(M):
        for j in range(N):
            for di, dj in [(1, 2), (1, -2), (-1, 2), (-1, -2), (2, 1), (2, -1), (-2, 1), (-2, -1)]:
                ni, nj = i + di, j + dj
                if 0 <= ni < M and 0 <= nj < N:
                    attacking += 1
                    
    total = (M*N)*(M*N-1)
    return  (total - attacking)%MOD
 

