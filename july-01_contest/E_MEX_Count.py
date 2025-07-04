def solve():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        
        # Count frequency of each value 0 to n
        count = [0] * (n + 2)  # Extra space for safety
        for x in a:
            if x <= n:
                count[x] += 1
        
        results = []
        
        for k in range(n + 1):
            possible_mex = set()
            
            # Try all possible ways to remove k elements
            # Use recursive approach to enumerate possibilities
            def dfs(pos, removed, current_count):
                if removed == k:
                    # Calculate MEX with current_count
                    mex = 0
                    while mex <= n and current_count[mex] > 0:
                        mex += 1
                    possible_mex.add(mex)
                    return
                
                if pos > n or removed > k:
                    return
                
                # Try removing different amounts of current value
                for remove_cnt in range(min(current_count[pos], k - removed) + 1):
                    new_count = current_count[:]
                    new_count[pos] -= remove_cnt
                    dfs(pos + 1, removed + remove_cnt, new_count)
            
            dfs(0, 0, count[:])
            results.append(len(possible_mex))
        
        print(*results)

solve()
