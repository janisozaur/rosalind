#include <iostream>
#include <map>
#include <limits>
#include <cassert>

using namespace std;

char compliment(const char &c)
{
	switch (c)
	{
		case 'A':
			return 'T';
		case 'T':
			return 'A';
		case 'C':
			return 'G';
		case 'G':
			return 'C';
	}
	assert(true);
	return '\0';
}

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
	for (const auto &dna_pair : dna_map)
	{
		const string &dna = dna_pair.second;
		const int length = dna.length();
		//cout << "length = " << length << endl;
		string dna_com;
		for (int i = 0; i < length; i++)
		{
			dna_com += compliment(dna.at(i));
		}
		for (int i = 1; i < length - 2; i++)
		{
			const bool inner_pair = dna.at(i) != dna_com.at(i + 1);
			if (inner_pair)
			{
				continue;
			}
			int start, end;
			for (int j = 2; start = i - j + 1, end = j + i, (j < 7) && (end < length) && (start >= 0); j++)
			{
				//cout << "start = " << start << ", end = " << end << ", i = " << i << ", j = " << j << ", inner_pair = " << inner_pair << endl;
				if (dna.at(start) != dna_com.at(end))
				{
					break;
				}
				cout << start + 1 << ' ' << j * 2 << endl;
			}
		}
	}
	return 0;
}
