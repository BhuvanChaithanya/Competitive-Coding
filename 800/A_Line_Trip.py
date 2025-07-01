t = int(input())
for i in range(t):
    n, x = map(int, input().split())
    lis = list(map(int, input().split()))
    max1 = max(lis[0], 2*(x-lis[-1]))
    for i in range(1, len(lis)):
        max1 = max(max1, lis[i]-lis[i-1])
    print(max1)