
t = int(input())
    
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    result = ['0'] * n
    min_so_far = float('inf')
    for i in range(n):
        min_so_far = min(min_so_far, a[i])
        if a[i] == min_so_far:
            result[i] = '1'
        
        
    max_so_far = float('-inf')
    for i in range(n-1, -1, -1):
        max_so_far = max(max_so_far, a[i])
        if a[i] == max_so_far:
            result[i] = '1'
        
    print(''.join(result))
