import sys

def solve():
    """
    Solves a single test case for the reachable point problem.
    """
    # Read blank line if n was read on a separate line before
    # input() 
    
    try:
        n_str = sys.stdin.readline()
        if not n_str: return
        n = int(n_str)
        
        px, py, qx, qy = map(int, sys.stdin.readline().split())
        a = list(map(int, sys.stdin.readline().split()))
    except (IOError, ValueError):
        return

    # 1. Calculate the required squared distance
    # Using integer arithmetic to avoid float precision issues.
    dist_sq = (px - qx)**2 + (py - qy)**2

    # 2. Calculate the bounds of the reachable region
    total_radius_sum = sum(a)
    
    if not a: # Edge case if the list of moves is empty
        max_radius = 0
    else:
        max_radius = max(a)

    # Maximum reachable distance is the sum of all radii.
    max_dist_sq = total_radius_sum**2

    # Minimum reachable distance logic
    # rem_sum is the sum of all radii except the largest one.
    rem_sum = total_radius_sum - max_radius
    
    min_dist = 0
    if max_radius > rem_sum:
        # If the longest move is greater than the sum of all others,
        # we can't get back to the origin.
        min_dist = max_radius - rem_sum
    
    min_dist_sq = min_dist**2

    # 3. Check if the target point is within the reachable annulus
    if min_dist_sq <= dist_sq <= max_dist_sq:
        print("Yes")
    else:
        print("No")


def main():
    """
    Main function to handle multiple test cases.
    """
    try:
        t_str = sys.stdin.readline()
        if not t_str: return
        t = int(t_str)
        for _ in range(t):
            solve()
    except (IOError, ValueError):
        return

if __name__ == "__main__":
    main()

