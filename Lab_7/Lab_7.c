#include <stdio.h>

int graph[10][10], visited[10], n;

void BFS(int start) {
    int q[20], front = 0, rear = 0, i;
    q[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");
    while(front < rear) {
        int node = q[front++];
        printf("%d ", node);

        for(i = 1; i <= n; i++) {
            if(graph[node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                q[rear++] = i;
            }
        }
    }
}

void DFS(int node) {
    int i;
    printf("%d ", node);
    visited[node] = 1;

    for(i = n; i >= 1; i--) {
        if(graph[node][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

int main() {
    int i, j, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter start node: ");
    scanf("%d", &start);

    for(i = 1; i <= n; i++) visited[i] = 0;
    BFS(start);

    for(i = 1; i <= n; i++) visited[i] = 0;
    printf("\nDFS Traversal: ");
    DFS(start);

    return 0;
}
