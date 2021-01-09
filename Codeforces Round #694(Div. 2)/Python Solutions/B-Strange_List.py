from sys import stdin,stdout
input = stdin.readline

def output(answer):
    stdout.write(str(answer)+'\n')
    
for _ in range(int(input())):
    
    n,m = map(int,input().split())
    k = list(map(int,input().split()))
    c = list(map(int,input().split()))
    
    dp = [0 for i in range(m)]
    for em in k:
        dp[em-1] += 1
    
    sn = 0
    itr = 0
    for index in range(m-1,-1,-1):
        count = dp[index]
        
        while(count > 0 and index >= itr):
            sn += c[itr]
            count -= 1
            itr += 1
        
        if(count > 0):
            sn += c[index]*count
            
    output(sn)
