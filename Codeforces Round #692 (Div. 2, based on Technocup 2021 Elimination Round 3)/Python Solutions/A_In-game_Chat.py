

t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    last_char = s[n-1]
    i = n-1
    b_count = 0
    while last_char == ')'and i >= 0:
        b_count += 1
        i -= 1
        last_char = s[i]
    c_count = n - b_count
    if b_count > c_count:
        print('Yes')
    else:
        print('No')