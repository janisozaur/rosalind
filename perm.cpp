#include <iostream>
#include <vector>

using namespace std;

int count(const int n)
{
	if (n == 1)
	{
		return 1;
	} else {
		return n * count(n - 1);
	}
}

void print(const vector<int> &vec)
{
	const int n = vec.size();
	for (int i = 0; i < n - 1; i++)
	{
		cout << vec.at(i) << ' ';
	}
	cout << vec.at(n - 1) << endl;
}

void perm(vector<bool> bs, vector<int> sofar)
{
	const int n = bs.size();
	if (n == sofar.size())
	{
		print(sofar);
		return;
	}
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (!bs.at(i))
		{
			found = true;
			bs[i] = true;
			vector<int> local_sofar = sofar;
			local_sofar.push_back(i + 1);
			perm(bs, local_sofar);
			bs[i] = false;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector<bool> bs;
	vector<int> sofar;
	bs.resize(n);
	cout << count(n) << endl;
	perm(bs, sofar);
	return 0;
}
