#include <iostream>
#include <vector>

using namespace std;

int bins(const vector<int> &nums, const int start, const int end, const int search)
{
	if (start == end)
	{
		if (nums.at(start) == search)
		{
			return start;
		} else {
			return -1;
		}
	} else if (end < start)
	{
		return -1;
	}
	const int pivot_idx = start + ((end - start) / 2);
	const int pivot = nums.at(pivot_idx);
	if (pivot > search)
	{
		return bins(nums, start, pivot_idx, search);
	} else if (pivot < search) {
		return bins(nums, pivot_idx + 1, end, search);
	} else {
		return pivot_idx;
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> nums;
	nums.reserve(n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}
	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		int result = bins(nums, 0, n - 1, tmp);
		cout << (result >= 0 ? result + 1 : result) << ' ';
	}
	cout << endl;
	return 0;
}
