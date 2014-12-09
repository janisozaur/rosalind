#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void print(const int i)
{
	cout << i << ' ';
}

void merge(const vector<int> &left, const vector<int> &right, const int start_l, const int start_r)
{
	if (start_l == left.size())
	{
		const int n = right.size();
		for (int i = start_r; i < n; i++)
		{
			print(right.at(i));
		}
		return;
	} else if (start_r == right.size())
	{
		const int n = left.size();
		for (int i = start_l; i < n; i++)
		{
			print(left.at(i));
		}
		return;
	}
	const int l = left.at(start_l);
	const int r = right.at(start_r);
	if (l > r)
	{
		print(r);
		merge(left, right, start_l, start_r + 1);
	} else {
		print(l);
		merge(left, right, start_l + 1, start_r);
	}
}

int main()
{
	int n, m;
	cin >> n;
	vector<int> vec1, vec2;
	vec1.reserve(n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		vec1.push_back(tmp);
	}
	cin >> m;
	vec2.reserve(m);
	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		vec2.push_back(tmp);
	}
	merge(vec1, vec2, 0, 0);
	cout << endl;
	return 0;
}
