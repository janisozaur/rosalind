#include <iostream>
#include <map>

using namespace std;

int main()
{
	string dna;
	cin >> dna;
	int k;
	cin >> k;
	int n = dna.length() - k;
	map<string, int> kmers;
	for (int i = 0; i < n; i++)
	{
		++kmers[dna.substr(i, k)];
	}
	int max = 0;
	for (const auto &p : kmers)
	{
		if (p.second > max)
		{
			max = p.second;
		}
	}
	for (const auto &p : kmers)
	{
		if (p.second == max)
		{
			cout << p.first << ' ';
		}
	}
	cout << endl;
	return 0;
}
