#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	cout << "digraph G {" << endl;
	for (int i = 0; i < m; i++)
	{
		int source, target;
		cin >> source >> target;
		cout << "\t" << source << " -> " << target << ';' << endl;
	}
	cout << '}' << endl;
	return 0;
}
