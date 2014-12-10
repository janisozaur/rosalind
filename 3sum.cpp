#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

void print(const pair<int, int> &a, const pair<int, int> &b, const pair<int, int> &c)
{
	vector<int> indices;
	indices.push_back(a.second + 1);
	indices.push_back(b.second + 1);
	indices.push_back(c.second + 1);
	sort(indices.begin(), indices.end());
	cout << indices.at(0) << ' ' << indices.at(1) << ' ' << indices.at(2) << endl;
}

int main()
{
	int k, n;
	cin >> k >> n;
	for (int w = 0; w < k; w++)
	{
		vector<pair<int, int>> nums;
		nums.reserve(n);
		for (int j = 0; j < n; j++)
		{
			int tmp;
			cin >> tmp;
			pair<int, int> p(tmp, j);
			nums.push_back(p);
		}
		sort(nums.begin(), nums.end());
		pair<int, int> a, b, c;
		bool found = false;
		for (int i = 0; (!found) && (i < n - 3); i++)
		{
			a = nums.at(i);
			int start = i + 1;
			int end = n - 1;
			while (start < end)
			{
				b = nums.at(start);
				c = nums.at(end);
				const int sum = a.first + b.first + c.first;
				if (sum == 0)
				{
					print(a, b, c);
					found = true;
					break;
				} else if (sum > 0)
				{
					end -= 1;
				} else {
					start += 1;
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
