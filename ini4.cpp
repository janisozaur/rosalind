#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (; a < b + 1; a++)
	{
		if (a & 1)
		{
			sum += a;
		}
	}
	cout << sum << endl;
	return 0;
}
