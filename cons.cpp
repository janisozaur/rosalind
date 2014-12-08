#include <iostream>
#include <map>
#include <vector>

using namespace std;

void print(const char &c, const vector<int> &vec)
{
	cout << c << ':';
	for (auto &i : vec)
	{
		cout << ' ' << i;
	}
	cout << endl;
}

int main()
{
	map<string, string> dna_map;
	string current_id;
	int length = 0;
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
				if (dna_map.at(current_id).length() > length)
				{
					length = dna_map.at(current_id).length();
				}
			}
		}
	}
	vector<int> a_vec(length), c_vec(length), g_vec(length), t_vec(length);
	for (const auto &it : dna_map)
	{
		int idx = 0;
		for (const char &c : it.second)
		{
			switch (c)
			{
				case 'A':
					++a_vec[idx];
					break;
				case 'C':
					++c_vec[idx];
					break;
				case 'G':
					++g_vec[idx];
					break;
				case 'T':
					++t_vec[idx];
					break;
			}
			++idx;
		}
	}
	for (int i = 0; i < length; i++)
	{
		char c;
		int a_cnt = a_vec.at(i);
		int c_cnt = c_vec.at(i);
		int g_cnt = g_vec.at(i);
		int t_cnt = t_vec.at(i);
		if (a_cnt > c_cnt)
		{
			if (a_cnt > g_cnt)
			{
				if (a_cnt > t_cnt)
				{
					c = 'A';
				} else {
					c = 'T';
				}
			} else {
				if (g_cnt > t_cnt)
				{
					c = 'G';
				} else {
					c = 'T';
				}
			}
		} else {
			if (c_cnt > g_cnt)
			{
				if (c_cnt > t_cnt)
				{
					c = 'C';
				} else {
					c = 'T';
				}
			} else {
				if (g_cnt > t_cnt)
				{
					c = 'G';
				} else {
					c = 'T';
				}
			}
		}
		cout << c;
	}
	cout << endl;
	print('A', a_vec);
	print('C', c_vec);
	print('G', g_vec);
	print('T', t_vec);
	return 0;
}
