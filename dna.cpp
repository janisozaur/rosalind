#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char, int> nt;
	while (cin)
	{
		char c;
		cin >> c;
		if (cin)
		{
			nt[c]++;
		}
	}
	cout << nt['A'] << " "
		 << nt['C'] << " "
		 << nt['G'] << " "
		 << nt['T'] << endl;
}
