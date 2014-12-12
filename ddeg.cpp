#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
	vector<list<int>> nodes;
	vector<int> degrees;
	int n, e;
	cin >> n >> e;
	nodes.resize(n);
	degrees.resize(n);
	for (int i = 0; i < e; i++)
	{
		int u, v;
		cin >> u >> v;
		u -= 1;
		v -= 1;
		nodes[u].push_back(v);
		degrees[u]++;
		nodes[v].push_back(u);
		degrees[v]++;
	}
	for (const auto &node : nodes)
	{
		int sum = 0;
		for (const auto &edge : node)
		{
			sum += degrees.at(edge);
		}
		cout << sum << ' ';
	}
	cout << endl;
	return 0;
}
