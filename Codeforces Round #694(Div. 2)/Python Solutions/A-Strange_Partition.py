t = int(input())
for _ in range(t):
    n, x = map(int, input().split(' '))
    A = list(map(int, input().split(' ')))
    s = sum(A)
    if s % x == 0:
        minimum = s//x
    else:
        minimum = s//x + 1
    maximum = 0
    for a in A:
        if a % x == 0:
            maximum += a//x
        else:
            maximum += (a//x + 1)
    print(minimum, maximum)
