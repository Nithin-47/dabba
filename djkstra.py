import heapq

def dijkstra(graph, src):
    V = len(graph)
    dist = [float("inf")] * V
    dist[src] = 0
    pq = [(0, src)]
    while pq:
        d, u = heapq.heappop(pq)
        if d > dist[u]:
            continue
        for v, w in enumerate(graph[u]):
            if w and dist[v] > dist[u] + w:
                dist[v] = dist[u] + w
                heapq.heappush(pq, (dist[v], v))
    return dist

graph = [    
    [0,7,3,2,2,0,0],
    [7,0,1,0,0,0,0],
    [3,1,0,0,4,3,0],
    [2,0,0,0,1,0,2],
    [2,0,4,1,0,4,2],
    [0,0,3,0,4,0,7],
    [0,0,0,2,2,7,0]
]

src = 0

result = dijkstra(graph, src)

print("The shortest distances from the source vertex to all other vertices are:", result)
