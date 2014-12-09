#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pattern, dna;
	cin >> pattern >> dna;
	int pos = 0;
	while (pos != string::npos)
	{
		pos = dna.find(pattern, pos);
		if (pos != string::npos)
		{
			cout << pos << ' ';
			pos++;
		}
	}
	cout << endl;
	return 0;
}
