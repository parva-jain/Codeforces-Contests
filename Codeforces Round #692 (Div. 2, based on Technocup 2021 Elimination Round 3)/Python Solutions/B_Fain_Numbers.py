       

def Convert(string): 
    list1=[] 
    list1[:0]=string 
    return list1


def Fair_no(n,s):
    fair = True
    # s = "".join(list(map(str,list(set(Convert(s))))))
    if s[-1] != 0:
        for i in range(len(s)):
            if s[i] == '0':
                continue
            
            else:    
                if n % int(s[i]) != 0:
                    fair = False
                    break
        return fair
    
    else:
        for i in range(len(s)-1):
            if s[i] == '0':
                continue
            else:
                if n % int(s[i]) != 0:
                    fair = False
                    break
        if n % 10 != 0:
            fair = False
        return fair
        


t = int(input())
for _ in range(t):
    N = int(input())
    n = N
    if Fair_no(n, str(n)):
        print(n)
    else:
        while Fair_no(n, str(n)) == False:
            n += 1
            if Fair_no(n, str(n)):
                print(n)
                break
            
    
    