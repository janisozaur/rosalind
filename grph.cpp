#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, string> dna_map;
	multimap<string, string> suffixes, prefixes;
	string current_id;
	while (cin)
	{
		string s;
		cin >> s;
		if (cin)
		{
			if (s[0] == '>')
			{
				s.erase(s.begin());
				current_id = s;
			} else {
				dna_map[current_id] += s;
				int length = s.length();
			}
		}
	}
	for (const auto &dna : dna_map)
	{
		int length = dna.second.length();
		string suffix = dna.second.substr(length - 3);
		string prefix = dna.second.substr(0, 3);
		suffixes.insert(make_pair(suffix, dna.first));
		prefixes.insert(make_pair(prefix, dna.first));
	}
	for (const auto &suffix : suffixes)
	{
		//cout << "processing suffix: " << suffix.first << ", coming from " << suffix.second << endl;
		auto range = prefixes.equal_range(suffix.first);
		for (auto it = range.first; it != range.second; it++)
		{
			//cout << "found matching prefix: " << it->first << ", coming from " << it->second << endl;
			if (suffix.second != it->second)
			{
				cout << suffix.second << ' ' << it->second << endl;
			}
		}
	}
	return 0;
}
