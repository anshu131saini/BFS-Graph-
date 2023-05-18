class Solution {
    void dfsprint(int vis[],int node,vector<int> adj[],vector<int> &dfs){
        vis[node]=1;
        dfs.push_back(node);
        
        for(auto i:adj[node]){
            if(!vis[i]){
                dfsprint(vis,i,adj,dfs);
            }
        }
    }
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       int vis[V]={0};
       int node=0;
        vector<int> dfs;
       dfsprint(vis,node,adj,dfs);
      return dfs;
    }
};
