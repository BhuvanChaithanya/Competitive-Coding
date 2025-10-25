import sys
# Increase recursion limit for potential deep recursion in DP, although iterative is safer.
# sys.setrecursionlimit(2000) 

def solve():
    try:
        
        line = sys.stdin.readline()
        if not line:
            return
        n, q = map(int, line.split())
    except EOFError:
        return
    except Exception:
        
        return
    
   
    s = sys.stdin.readline().strip()
    
    
    try:
        a_list = list(map(int, sys.stdin.readline().split()))
    except EOFError:
       
        return
        
    
    N_DP = 1 << 19  # 524288
    
    dp = [[0] * (N_DP + 1) for _ in range(n)]

    
    for a in range(1, N_DP + 1):
        for i in range(n):
           
            i_next = (i + 1) % n
            
            op_type = s[i]
            
            if op_type == 'A':
                
                a_new = a - 1
                
                dp[i][a] = 1 + dp[i_next][a_new]
            
            elif op_type == 'B':
                
                a_new = a // 2
                dp[i][a] = 1 + dp[i_next][a_new]
    
    results = []
    
    for a_start in a_list:
        a = a_start
        t_total = 0
        
       
        while a > N_DP:
            a_next = a
            
            for i in range(n):
                op_type = s[i]
                
                if op_type == 'A':
                    a_next -= 1
                elif op_type == 'B':
                    a_next //= 2
                    
              
                if a_next == 0:
                   
                    t_total += (i + 1)
                    a = 0 
                    break
            
            if a != 0:
                a = a_next
                t_total += n
        
        
        if a > 0:
            
            t_total += dp[0][a]
            
        results.append(str(t_total))
    
    
    for result in results:
        print(result)

def main():
    try:
       
        t_line = sys.stdin.readline()
        if not t_line:
            return
        t = int(t_line)
        
        for _ in range(t):
            solve()
            
    except Exception:
        pass

if __name__ == "__main__":
    main()