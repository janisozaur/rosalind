#include <iostream>
#include <map>
#include <limits>

using namespace std;

int main()
{
	map<string, string> dna_map;
	string current_id;
	while (cin)
	{
		string s;
		getline(cin, s);
		if (cin)
		{
			if (s[0] == '>')
			{
				s.erase(s.begin());
				current_id = s;
			} else {
				dna_map[current_id] += s;
			}
		}
	}
	int shortest = numeric_limits<int>::max();
	string id;
	for (const auto dna : dna_map)
	{
		int length = dna.second.length();
		if (length < shortest)
		{
			shortest = length;
			id = dna.first;
		}
	}
	const string dna = dna_map[id];
	string longest_str;
	int longest_len = 0;
	for (int i = 0; i < shortest; i++)
	{
		for (int j = shortest - i - 1; j > longest_len; j--)
		{
			const string s = dna.substr(i, j);
			//cout << "substr: " << s << endl;
			bool exists = true;
			for (const auto &cur_dna : dna_map)
			{
				if (cur_dna.first == id)
				{
					continue;
				}
				if (cur_dna.second.find(s) == string::npos)
				{
					//cout << "substr not found in " << cur_dna.first << ": " << cur_dna.second << endl;
					exists = false;
					break;
				}
			}
			if (exists)
			{
				//cout << "found" << endl;
				longest_str = s;
				longest_len = s.length();
			}
		}
	}
	cout << longest_str << endl;
	return 0;
}
