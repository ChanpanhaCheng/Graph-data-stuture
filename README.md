# Graph-data-stuture
hi
## DFS (Depth-First Search)
Depth-First Search (DFS) is a graph traversal algorithm that explores a graph depth-wise by moving along one path as far as possible before backtracking. It is commonly used in various applications such as detecting cycles, solving puzzles (like mazes), or exploring all possible solutions in a decision tree.

### How DFS Works
1. Start from a source node.
2. Mark the current node as visited.
3. Recursively visit all unvisited neighbors of the current node.
4. If no unvisited neighbors remain, backtrack to the previous node and continue the process.

## BFS (Breadth-First Search)
Breadth-First Search (BFS) is a graph traversal algorithm that explores a graph level by level, starting from a source node. It visits all neighbors of a node before moving on to the next level of neighbors. BFS uses a queue to keep track of nodes to be explored, ensuring a breadth-first traversal.

### How BFS Works
1. Start from a source node.
2. Mark the source node as visited and enqueue it.
3. While the queue is not empty:
    - Dequeue a node and process it.
    - Enqueue all unvisited neighbors of the node and mark them as visited.

## When to use BFS or DFS

### BFS
- Find the shortest path in an unweighted graph.
- Process nodes layer by layer.

### DFS
- Traverse deeply into the graph.
- Solve problems involving recursion or backtracking.

## Conclusion
- Both BFS and DFS have the same time complexity of (O(V + E)).
- space complexity and behavior differ, which can influence the choice of algorithm based on the specific use case
### Time Complexity :  (O(V+E))
- (V) is the number of vertices (nodes) in the graph.
- (E) is the number of edges in the graph.
### Space Complexity : 
- *BFS*: (O(V)) due to the queue that stores all the vertices at the current level.
- *DFS*: (O(V)) in the worst case for the stack (if implemented recursively) or (O(h)) where (h) is the maximum height of the recursion stack (for a tree-like structure).
