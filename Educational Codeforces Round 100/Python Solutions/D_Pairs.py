def binarySearch(A,B,n):
    low,high = 0,n
    while(low < high):
        mid = low + (high-low+1)//2
        flag = 1
        for index in range(mid):
            if(A[index] > B[n+index-mid]):
                flag = 0
        if(flag == 0):
            high = mid - 1
        else:
            low  = mid 
    return low


test = int(input())
for _ in range(test):
    
    n = int(input())
    a = list(map(int,input().split()))
    
    num = 1
    
    b = []
    for em in a:
        if(em == num):
            num += 1
            continue
        else:
            for i in range(num,em):
                b.append(i)
            num = em + 1
    
    for i in range(num,2*n+1):
        b.append(i)
        
    index1 = binarySearch(a,b,n)
    index2 = n - binarySearch(b,a,n)

    print(max(0,index1 - index2 + 1))
