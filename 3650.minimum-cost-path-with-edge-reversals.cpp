/*
 * @lc app=leetcode id=3650 lang=cpp
 *
 * [3650] Minimum Cost Path with Edge Reversals
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair <int, int>>> adj(n);

        for(auto& edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];

            adj[u].push_back({w, v});
            adj[v].push_back({2 * w, u});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, 0});

        vector<int> dist(n, INT_MAX);
        dist[0] = 0;

        while(!pq.empty()) {
            auto [cost, u] = pq.top(); pq.pop();

            if(cost > dist[u])
                continue;

            if(u == n - 1)
                return cost;

            for(auto [c, v] : adj[u]) {
                if(dist[v] > cost + c) {
                    pq.push({cost + c, v});
                    dist[v] = cost + c;
                }
            }
        }

        return -1;
    }
};
// @lc code=end

