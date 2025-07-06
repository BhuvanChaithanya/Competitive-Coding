def min_cost_to_equal(t, test_cases):
    
    results = []
    for a, b, x, y in test_cases:
        if a == b:
            results.append(0)
            continue
            
        
        if a > b:
            
            if a % 2 == 1 and a - 1 == b:
                results.append(y)
            else:
                results.append(-1)
        
        
        else:
            diff = b - a
            
            
            cost1 = diff * x
            
            cost2 = float('inf') 
            cost_for_two = min(2 * x, x + y)

            if a % 2 == b % 2:
                
                pairs = diff // 2
                cost2 = pairs * cost_for_two
            else:
                
                first_step_cost = 0
                if a % 2 == 0: 
                    
                    first_step_cost = min(x, y)
                else:
                    first_step_cost = x
                
                
                remaining_diff = diff - 1
                if remaining_diff > 0:
                    pairs = remaining_diff // 2
                    cost2 = first_step_cost + pairs * cost_for_two
                else: 
                    cost2 = first_step_cost

            results.append(min(cost1, cost2))
            
    return results


try:
    t = int(input())
    lis = []
    for _ in range(t):
        lis.append(list(map(int, input().split())))

    for res in min_cost_to_equal(t, test_cases=lis):
        print(res)
except (IOError, ValueError):
    
    pass
