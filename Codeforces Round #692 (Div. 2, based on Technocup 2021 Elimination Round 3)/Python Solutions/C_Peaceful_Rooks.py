class DSU(object):
    
    def __init__(self,N):
        self.parent = list(range(N))
        self.rank   = [0]*N
        self.count  = 0
    
    def find(self,x):
        if(self.parent[x] != x):
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
        
    def union(self,x,y):
        xr,yr = self.find(x),self.find(y)
        
        if(xr == yr):
            return 
        elif(self.rank[xr] < self.rank[yr]):
            xr,yr = yr,xr
        
        if(self.rank[xr] == self.rank[yr]):
            self.rank[xr] += 1
        
        self.parent[yr] = self.parent[xr]
        self.count -= 1
        

from sys import stdin,stdout
input = stdin.readline

def output(answer):
    stdout.write(str(answer)+'\n')

test = int(input())
for _ in range(test):
    
    n,m = map(int,input().split())
    dsu = DSU(n+1)
    
    edges = []
    for inp in range(m):
        col,row = map(int,input().split())
        edges.append((col,row))
    
    answer = m
    for col,row in edges:
        if(col == row):
            answer = answer - 1
        else:
            colParent = dsu.find(col)
            rowParent = dsu.find(row)
            if(colParent == rowParent):
                answer = answer + 1
            else:
                dsu.union(col,row)
    
    output(answer)
