
# A. Dungeon

t = int(input())
for _ in range(t):
    a,b,c = map(int,input().split(' '))
    s = a+b+c
    d = s // 9
    
    # applying the condition that sum is atleast equal to 9 
    # and is multiple of 9.
    if s > 8 and s % 9 == 0:
        
        # applying the condition that a,b and c are atleast
        # equal to the d.
        if a >= d and b >= d and c >= d:
            print('YES')
        
        else:
            print('NO')
    
    else:
        print('NO')
           
        
        
            
    