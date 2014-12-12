#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, int> dict;
	while (cin)
	{
		string s;
		cin >> s;
		if (cin)
		{
			dict[s]++;
		}
	}
	for (const auto &p : dict)
	{
		cout << p.first << ' ' << p.second << endl;
	}
	return 0;
}
