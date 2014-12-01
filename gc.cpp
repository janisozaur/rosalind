#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, string> dna_map;
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
			}
		}
	}
	float gc_max = 0.f;
	for (auto it = dna_map.cbegin(); it != dna_map.cend(); ++it)
	{
		//cout << "id = " << it->first << ", content = " << it->second << endl;
		const string &s = it->second;
		int gc_count = 0;
		for (auto sit = s.cbegin(); sit != s.cend(); ++sit)
		{
			if (*sit == 'C' || *sit == 'G')
			{
				gc_count++;
			}
		}
		float gc = (float(gc_count) / s.length()) * 100;
		//cout << "gc content: " << gc << endl;
		if (gc > gc_max)
		{
			gc_max = gc;
			current_id = it->first;
		}
	}
	cout << current_id << endl << gc_max << endl;
	return 0;
}
