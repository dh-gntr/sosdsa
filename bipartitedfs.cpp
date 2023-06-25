void dfs(vector<vector<int>>& graph, int i, bool&ans, vector<int>&colour)
    {
        for(auto nbr: graph[i])
        {
            if(colour[nbr]==-1)
            {
                colour[nbr]= !colour[i];
                dfs(graph, nbr, ans, colour);
                if(ans==false)
                break;
            }
            else if(colour[nbr] == colour[i])
            {
                ans = false;
                break;
            }
        }

    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        vector<int> colour(graph.size(),-1);
        
        bool ans = true;
        for(int i=0;i<graph.size();i++)
        {
            if(colour[i]==-1)
            {
                colour[i]= 0;
                dfs(graph, i, ans, colour);
            }
            if(ans==false)
            break;
        }

        return ans;

    }
