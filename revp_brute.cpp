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
		for (int i = 0; i < length; i++)
		{
			int start, end;
			for (int j = 2; start = i, end = 2 * j + i - 1, (j < 7) && (end < length) && (start >= 0); j++)
			{
				//cout << "start = " << start << ", end = " << end << ", i = " << i << ", j = " << j << endl;
				bool mismatched = false;
				for (int p = 0; p < j; p++)
				{
					if (dna.at(start + p) != dna_com.at(end - p))
					{
						mismatched = true;
						break;
					}
				}
				if (!mismatched)
				{
					cout << start + 1 << ' ' << 2 * j << endl;
				}
			}
		}
	}
	return 0;
}
