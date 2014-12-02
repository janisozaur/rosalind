#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;
	string s;
	while (getline(cin, s))
	{
		if (i & 1)
		{
			cout << s << endl;
		}
		i += 1;
	}
	return 0;
}
