#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

struct Node
{
	int distance = -1;
};

int main()
{
	int e, v;
	cin >> v >> e;
	vector<Node> nodes(v);
	vector<vector<int>> edges(v);
	for (int i = 0; i < e; i++)
	{
		int src, target;
		cin >> src >> target;
		edges[src - 1].push_back(target - 1);
	}
	nodes[0].distance = 0;
	queue<int> q;
	q.push(0);
	while (!q.empty())
	{
		const int target = q.front();
		const int distance = nodes.at(target).distance;
		q.pop();
		for (const auto neighbor : edges.at(target))
		{
			if (nodes.at(neighbor).distance == -1)
			{
				q.push(neighbor);
				nodes[neighbor].distance = distance + 1;
			}
		}
	}
	for (int i = 0; i < v; i++)
	{
		cout << nodes.at(i).distance << ' ';
	}
	cout << endl;
	return 0;
}
