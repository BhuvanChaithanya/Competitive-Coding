t= int(input())

for _ in range(t):
    n, k = map(int, input().split())

    s = input().strip()
    count1 = s.count('1')
    if count1 <=k or k>n//2:
        print("Alice")

    else:
        print("Bob")