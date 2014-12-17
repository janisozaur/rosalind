#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;
	for (int j = 0; j < k; j++)
	{
		vector<int> nums;
		nums.reserve(n);
		int cand, count = 0;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			nums.push_back(tmp);
			if (count == 0)
			{
				cand = tmp;
				count++;
			} else if (tmp == cand)
			{
				count++;
			} else {
				count--;
			}
		}
		if (count > 0)
		{
			int count2 = 0;
			for (int i = 0; i < n; i++)
			{
				if (nums.at(i) == cand)
				{
					count2++;
					if (count2 > (n / 2))
					{
						cout << cand << ' ';
						break;
					}
				}
			}
			if (count2 <= (n / 2))
			{
				cout << -1 << ' ';
			}
		} else {
			cout << -1 << ' ';
		}
	}
	cout << endl;
	return 0;
}
