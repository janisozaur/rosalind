#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<unsigned long long> young(n), old(n);
	young[0] = young[1] = 1;
	for (int i = 2; i < m; i++)
	{
		young[i] = young.at(i - 1) + young.at(i - 2);
		old[i] = young.at(i - 1);
	}
	for (int i = 1; i < n; i++)
	{
		old[i] = young.at(i - 1) + old.at(i - 1) - (i - m >= 0 ? young.at(i - m) : 0);
		young[i] = old.at(i - 1);
	}
	cout << young.at(n - 1) + old.at(n - 1) << endl;
	return 0;
}
