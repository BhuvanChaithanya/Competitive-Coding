def checksubs(s1,s2):
    for i in range(len(s1)- len(s2)+1):
        if s1[i:i+len(s2)] == s2:
            return True
        
    return False



t = int(input())
for i in range(t):
    n, m = map(int, input().split())
    s1 = input()
    s2 = input()
    i =0
    while len(s1)<=100:
        if not checksubs(s1,s2):
            s1 += s1
            i +=1

        else:
            print(i)
            break

    
    else:
        print(-1)
    