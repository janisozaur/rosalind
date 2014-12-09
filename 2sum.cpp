#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		vector<int> nums;
		nums.reserve(n);
		for (int j = 0; j < n; j++)
		{
			int tmp;
			cin >> tmp;
			nums.push_back(tmp);
		}
		bool found = false;
		for (int p = 0; (!found) && (p < n - 1); p++)
		{
			const int first = nums.at(p);
			for (int q = p + 1; q < n; q++)
			{
				const int second = nums.at(q);
				if (first == -second)
				{
					found = true;
					cout << p + 1 << ' ' << q + 1 << endl;
					break;
				}
			}
		}
		if (!found)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}
