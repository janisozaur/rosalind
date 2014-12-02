#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.length();
	int hamm = 0;
	for (int i = 0; i < n; i++)
	{
		if (s1.at(i) != s2.at(i))
		{
			hamm++;
		}
	}
	cout << hamm << endl;
}
