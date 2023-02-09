def find(parent, i):
    if parent[i] == i:
        return i
    return find(parent, parent[i])

def union(parent, rank, x, y):
    rootx = find(parent, x)
    rooty = find(parent, y)

    if rootx != rooty:
        if rank[rootx] < rank[rooty]:
            parent[rootx] = rooty
        elif rank[rootx] > rank[rooty]:
            parent[rooty] = rootx
        else:
            parent[rooty] = rootx
            rank[rootx] += 1

def kruskal(graph, V):
    result = []
    i = 0
    e = 0
    graph = sorted(graph, key=lambda item: item[2])
    parent = []
    rank = []
    for node in range(V):
        parent.append(node)
        rank.append(0)

    while e < V - 1:
        u, v, w = graph[i]
        i = i + 1
        x = find(parent, u)
        y = find(parent, v)

        if x != y:
            e = e + 1
            result.append([u, v, w])
            union(parent, rank, x, y)
    return result

V = 6
E = 9
graph = [    
    [0, 1, 6],
    [0, 2, 6],
    [0, 3, 8],
    [1,2,5],
    [2, 3, 7],
    [1, 4, 10],
    [4,3,5],
    [3,5,3],
    [4,5,3]
]

result = kruskal(graph, V)
r=0

for u, v, weight in result:
    print("%d - %d: %d" % (u, v, weight))
    r = r + weight

print("Weight of Minimal Spanning Tree-",r)   
    
