* C++ program to print the longest path between any pair of vertices */

#include <bits/stdc++.h>
using namespace std;

void DFS(vector< pair<int,int> > gph[], int sc, int prev_len, int *max_len, vector<bool>  &vis)
{
    // Mark the src node visited

    vis[sc] = 1;
    int curr_len = 0;

    /* Adjacent is a pair type that stores
    destination node and edge weight*/

    pair < int, int > adj;

    for (int i=0; i<gph[sc].size(); i++)
    {
        // Adjacent element
        adj = gph[sc][i];

        // If node is not visited
        if (!vis[adj.first])
        {
            curr_len = prev_len + adj.second;

            // Call DFS for adjacent nodes
            DFS(gph, adj.first, curr_len,
                max_len,  vis);
        }
        /* If total cable length till now greater than
         previous length then update it*/

        if ((*max_len) < curr_len)
            *max_len = curr_len;

        // make curr_len = 0 for next adjacent
        curr_len = 0;
    }
}

int longestPath(vector<pair<int,int> >graph[], int n)
{
    int max_len = INT_MIN;

    /* call DFS for each node to find maximum
    length of cable */

    for (int i=1; i<=n; i++)
    {
        //initialise visited array with 0
        vector< bool > visited(n+1, false);

        // Call DFS for src vertex i
        DFS(graph, i, 0, &max_len, visited);
    }
    return max_len;
}

// driver program to test the input

int main()
{
    // n is the number of cities

    int n = 6;
    vector< pair<int,int> > graph[n+1];

    /* create an undirected graph
    first edge */

    graph[1].push_back(make_pair(2, 9));
    graph[2].push_back(make_pair(1, 9));

    // second edge

    graph[2].push_back(make_pair(3, 7));
    graph[3].push_back(make_pair(2, 7));

    // third edge

    graph[2].push_back(make_pair(6, 4));
    graph[6].push_back(make_pair(2, 4));

    // fourth edge

    graph[4].push_back(make_pair(6, 1));
    graph[6].push_back(make_pair(4, 1));

    // fifth edge

    graph[5].push_back(make_pair(6, 6));
    graph[6].push_back(make_pair(5, 6));

    cout << "The longest path between any two vertices is "
         << longestPath(graph, n);

    return 0;
}
