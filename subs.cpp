#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dna, sub;
	cin >> dna >> sub;
	size_t pos = 0;
	while (pos != string::npos)
	{
		pos = dna.find(sub, pos + 1);
		if (pos != string::npos)
		{
			cout << pos + 1 << " ";
		}
	}
	cout << endl;
	return 0;
}
