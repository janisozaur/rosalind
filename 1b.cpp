#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dna;
	cin >> dna;
	for (auto it = dna.crbegin(); it != dna.crend(); it++)
	{
		switch (*it)
		{
			case 'A':
				cout << 'T';
				break;
			case 'T':
				cout << 'A';
				break;
			case 'C':
				cout << 'G';
				break;
			case 'G':
				cout << 'C';
				break;
		}
	}
	cout << endl;
	return 0;
}
