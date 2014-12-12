#include <iostream>
#include <vector>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int main()
{
	vector<int> nodes;
	int node_count, edges_count;
	cin >> node_count >> edges_count;
	nodes.resize(node_count);
	while (cin)
	{
		int i, j;
		cin >> i >> j;
		if (cin)
		{
			int m = MAX(i, j);
			if (m > nodes.size())
			{
				nodes.resize(m);
			}
			nodes[i - 1]++;
			nodes[j - 1]++;
		} else {
			for (const auto &e : nodes)
			{
				cout << e << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
