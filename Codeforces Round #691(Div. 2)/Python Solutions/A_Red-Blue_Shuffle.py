
t = int(input())
for _ in range(t):
    n = int(input())
    r = input()
    b = input()
    r_count = 0
    b_count = 0
    for i in range(n):
        if r[i] > b[i]:
            r_count += 1
        elif b[i] > r[i]:
            b_count += 1
    if r_count > b_count:
        print('RED')
    elif b_count > r_count:
        print('BLUE')
    else:
        print('EQUAL')