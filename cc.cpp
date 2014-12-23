#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct Node
{
	bool visited = false;
};

void DFS(int node, const vector<list<int>> &edges, vector<Node> &nodes)
{
	if (nodes.at(node).visited)
	{
		return;
	} else {
		nodes[node].visited = true;
	}
	const auto &edges_list = edges.at(node);
	for (const auto &target : edges_list)
	{
		DFS(target, edges, nodes);
	}
}

int main()
{
	vector<list<int>> edges;
	vector<Node> nodes;
	int n, e;
	cin >> n >> e;
	edges.resize(n);
	nodes.resize(n);
	for (int i = 0; i < e; i++)
	{
		int u, v;
		cin >> u >> v;
		u -= 1;
		v -= 1;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	int clusters = 0;
	for (int i = 0; i < n; i++)
	{
		if (!nodes.at(i).visited)
		{
			clusters++;
			DFS(i, edges, nodes);
		}
	}
	cout << clusters << endl;
	return 0;
}
