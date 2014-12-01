#include <iostream>

using namespace std;

int main()
{
	while (cin)
	{
		char c;
		cin >> c;
		if (cin)
		{
			if (c == 'T')
			{
				c = 'U';
			}
			cout << c;
		}
	}
	cout << endl;
	return 0;
}
