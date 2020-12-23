def dfs(graph,n):
    
    cycle = 0
    vis = [0 for i in range(n+1)]
    
    for vertex in range(1,n+1):
        
        if(vis[vertex] == 0):
            done  = []
            stack = [vertex]
            vis[vertex] = 1
            
            while(len(stack) > 0):
                u = stack.pop()
                done.append(u)
                for v in graph[u]:
                    if(vis[v] == 1):
                        cycle = cycle + 1
                    elif(vis[v] == 0):
                        vis[v] = 1
                        stack.append(v)
            
            for em in done:
                vis[em] = 2
    
    return cycle
    
    
    
test = int(input())
for _ in range(test):
    
    n,m = map(int,input().split())
    
    answer = m
    graph = [[] for i in range(n+1)]
    
    for inp in range(m):
        x,y = map(int,input().split())
        if(x == y):
            answer = answer - 1
            continue
        graph[x].append(y)
        
    answer = answer + dfs(graph,n)
    
    print(answer)
