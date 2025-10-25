import math

def max_hao_slices(n):
    if n <= 2:
        return 0

    total_hao_slices = 0
    current_slices = n

    while current_slices >= 3:
        
        hao_eats_this_round = current_slices // 3
        total_hao_slices += hao_eats_this_round

       
        current_slices = (current_slices + 3 - 1) // 3
        
    return total_hao_slices


t = int(input())
results = []
for _ in range(t):
    n = int(input())
    results.append(max_hao_slices(n))
for result in results:
    print(result)