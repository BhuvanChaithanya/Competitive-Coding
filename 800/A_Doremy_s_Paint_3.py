import collections
t = int(input())
for i in range(t):
    n = int(input())
    a =list(map(int, input().split()))


    dicti = {}

    for n in a:
        dicti[n] = dicti.get(n,0)+1
    
    if len(dicti.keys())>2:
        print("No")
    
    elif len(dicti.keys())==1:
        print("Yes")

    else:
        print('Yes' if abs(list(dicti.values())[0]-list(dicti.values())[1]) <=1 else 'No')


