#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	for (auto rit = s.rbegin(); rit != s.rend(); ++rit)
	{
		switch (*rit)
		{
			case 'T':
				cout << 'A';
				break;
			case 'C':
				cout << 'G';
				break;
			case 'G':
				cout << 'C';
				break;
			case 'A':
				cout << 'T';
				break;
		}
	}
	cout << endl;
	return 0;
}
