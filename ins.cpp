#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> nums;
	nums.reserve(n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}
	int swaps = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0 && nums.at(j) < nums.at(j - 1); j--)
		{
			int tmp = nums.at(j);
			nums[j] = nums.at(j - 1);
			nums[j - 1] = tmp;
			swaps++;
		}
	}
	cout << swaps << endl;
	return 0;
}
