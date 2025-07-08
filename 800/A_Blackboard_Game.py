t = int(input())
for i in range(t):
    n = int(input())
    if n<=2:
        print("Alice")

    elif n %4 == 0:
        print("Bob")

    else:
        print("Alice")